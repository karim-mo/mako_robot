from setuptools import setup

package_name = 'mako_py_feedback_actuators'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='karim',
    maintainer_email='karim.mohamed420@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "ledControlNode = mako_py_feedback_actuators.LED_Control:main",
            "servoControlNode = mako_py_feedback_actuators.Servo_Control:main",
            "motorControlNode = mako_py_feedback_actuators.Motor_Control:main"
        ],
    },
)
