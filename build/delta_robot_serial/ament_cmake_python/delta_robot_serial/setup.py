from setuptools import find_packages
from setuptools import setup

setup(
    name='delta_robot_serial',
    version='0.0.0',
    packages=find_packages(
        include=('delta_robot_serial', 'delta_robot_serial.*')),
)
