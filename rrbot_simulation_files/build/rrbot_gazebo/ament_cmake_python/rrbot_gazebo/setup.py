from setuptools import find_packages
from setuptools import setup

setup(
    name='rrbot_gazebo',
    version='0.2.0',
    packages=find_packages(
        include=('rrbot_gazebo', 'rrbot_gazebo.*')),
)
