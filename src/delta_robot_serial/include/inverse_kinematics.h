#include <cmath>

#ifndef REVERSE_KINEMATICS_H
#define REVERSE_KINEMATICS_H

const double l_pl_i=50.0;
const double l_dl_i=93.0;
const double a_i=28.0;
const double b_i=20.0;

inline double deg2rad(double degree) {
    return degree*M_PI/180.0;
}

inline double rad2deg(double radians) {
    return radians*180.0/M_PI;
}

// Solves the inverse kinematics for a single delta arm placed at angle
// alpha_i_deg. Fills phi[0] = driven proximal (motor) angle in degrees;
// phi[1], phi[2] are passive joint angles (see the note at phi[1] below).
inline void inverse_kinematics(double position[], double alpha_i_deg, double phi[]) {
    const double sa = sin(deg2rad(alpha_i_deg));
    const double ca = cos(deg2rad(alpha_i_deg));

    double acos_arg = (position[0]*sa - position[1]*ca) / l_dl_i;

    if (fabs(acos_arg) > 1.0) {
        phi[0] = NAN; phi[1] = NAN; phi[2] = NAN;
        return;
    }

    phi[2] = rad2deg(acos(acos_arg));

    double A = -a_i + b_i + position[0]*ca + position[1]*sa;
    double B = -position[2];
    double a = l_pl_i;
    double b = l_dl_i*sin(deg2rad(phi[2]));

    const double AB2 = A*A + B*B;

    double C_a = (AB2 + a*a - b*b)/(2*a);
    double disc_a = AB2 - C_a*C_a;

    if (disc_a < 0) {
        phi[0] = NAN; phi[1] = NAN; phi[2] = NAN;
        return;
    }

    phi[0] = rad2deg( 2*atan2( B - sqrt(disc_a), A + C_a ) );
    // 2*atan2 yields an angle in (-360, 360]; normalize to (-180, 180] to pick a
    // canonical representative. Note: this wrap does NOT gate the servo range —
    // the physical [0, 90] limit is enforced downstream (ikin_server -> arduino),
    // which silently rejects any angle outside it.
    while (phi[0] > 180.0) phi[0] -= 360.0;
    while (phi[0] <= -180.0) phi[0] += 360.0;

    // phi[1] is the passive distal-joint angle. It is computed for completeness
    // but is NOT currently consumed by any caller (ikin_server reads only phi[0]),
    // and its disc_b<0 guard duplicates the disc_a reachability check above.
    // Kept intentionally for a possible future full joint-state output.
    double C_b = (AB2 + b*b - a*a)/(2*b);
    double disc_b = AB2 - C_b*C_b;

    if (disc_b < 0) {
        phi[0] = NAN; phi[1] = NAN; phi[2] = NAN;
        return;
    }

    phi[1] = rad2deg( 2*atan2( B - sqrt(disc_b), A + C_b ) );
    phi[1] -= phi[0];
    while (phi[1] > 180.0) phi[1] -= 360.0;
    while (phi[1] <= -180.0) phi[1] += 360.0;
}

#endif //REVERSE_KINEMATICS_H
