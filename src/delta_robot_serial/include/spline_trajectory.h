#ifndef SPLINE_TRAJECTORY_H
#define SPLINE_TRAJECTORY_H

#include <vector>
#include <array>
#include <cmath>
#include <algorithm>

// Header-only natural cubic spline through a set of 3D via points, parameterised
// by a monotonically increasing knot vector `t` (typically cumulative chord
// length). Each axis (x, y, z) is fitted independently. Matches the header-only
// style of direct_kinematics.h / inverse_kinematics.h — no external deps.
class CubicSpline {
public:
    // t: knot parameters, size P, strictly increasing (coincident knots are
    //    tolerated but contribute a zero-length segment).
    // x/y/z: per-axis values at each knot, size P.
    CubicSpline(const std::vector<double>& t,
                const std::vector<double>& x,
                const std::vector<double>& y,
                const std::vector<double>& z)
        : t_(t) {
        build_axis(x, cx_);
        build_axis(y, cy_);
        build_axis(z, cz_);
    }

    // Evaluate the spline at parameter u, clamped to [t_front, t_back].
    // Returns {x, y, z}. Safe for P == 1 (returns the single knot).
    std::array<double, 3> evaluate(double u) const {
        const size_t P = t_.size();
        if (P == 1) {
            return {cx_[0].a, cy_[0].a, cz_[0].a};
        }
        u = std::min(std::max(u, t_.front()), t_.back());

        // Find segment k such that t_[k] <= u <= t_[k+1] (linear search;
        // trajectories here have only a handful of knots).
        size_t k = 0;
        while (k + 1 < P - 1 && u > t_[k + 1]) {
            ++k;
        }
        const double h = u - t_[k];
        return {eval_seg(cx_[k], h), eval_seg(cy_[k], h), eval_seg(cz_[k], h)};
    }

private:
    // Per-segment cubic: value(h) = a + b*h + c*h^2 + d*h^3, h = u - t_[k].
    struct Seg { double a, b, c, d; };

    std::vector<double> t_;
    std::vector<Seg> cx_, cy_, cz_;

    static double eval_seg(const Seg& s, double h) {
        return s.a + h * (s.b + h * (s.c + h * s.d));
    }

    // Build natural-cubic-spline coefficients for one axis. Solves the
    // tridiagonal system for the second derivatives (m_k) via the Thomas
    // algorithm, then derives the a/b/c/d per segment.
    void build_axis(const std::vector<double>& y, std::vector<Seg>& seg) {
        const size_t P = y.size();
        seg.clear();
        if (P == 1) {
            // Single point: constant "segment" so evaluate() can return it.
            seg.push_back({y[0], 0.0, 0.0, 0.0});
            return;
        }

        const size_t n = P - 1;                 // number of intervals
        std::vector<double> h(n);
        for (size_t k = 0; k < n; ++k) {
            h[k] = t_[k + 1] - t_[k];
            if (h[k] < 1e-9) h[k] = 1e-9;       // guard coincident knots
        }

        // Second derivatives m_0..m_n; natural boundary => m_0 = m_n = 0.
        std::vector<double> m(P, 0.0);
        if (P >= 3) {
            // Interior system size (P-2), unknowns m_1..m_{n-1}.
            const size_t M = P - 2;
            std::vector<double> sub(M), diag(M), sup(M), rhs(M);
            for (size_t i = 0; i < M; ++i) {
                const size_t k = i + 1;         // knot index
                sub[i]  = h[k - 1];
                diag[i] = 2.0 * (h[k - 1] + h[k]);
                sup[i]  = h[k];
                rhs[i]  = 6.0 * ((y[k + 1] - y[k]) / h[k]
                               - (y[k] - y[k - 1]) / h[k - 1]);
            }
            // Thomas algorithm (forward sweep + back substitution).
            for (size_t i = 1; i < M; ++i) {
                const double w = sub[i] / diag[i - 1];
                diag[i] -= w * sup[i - 1];
                rhs[i]  -= w * rhs[i - 1];
            }
            std::vector<double> sol(M);
            sol[M - 1] = rhs[M - 1] / diag[M - 1];
            for (size_t i = M - 1; i-- > 0;) {
                sol[i] = (rhs[i] - sup[i] * sol[i + 1]) / diag[i];
            }
            for (size_t i = 0; i < M; ++i) {
                m[i + 1] = sol[i];
            }
        }
        // (P == 2 => straight line: m stays all zero, giving a linear segment.)

        seg.resize(n);
        for (size_t k = 0; k < n; ++k) {
            seg[k].a = y[k];
            seg[k].b = (y[k + 1] - y[k]) / h[k]
                     - h[k] * (2.0 * m[k] + m[k + 1]) / 6.0;
            seg[k].c = m[k] / 2.0;
            seg[k].d = (m[k + 1] - m[k]) / (6.0 * h[k]);
        }
    }
};

#endif // SPLINE_TRAJECTORY_H
