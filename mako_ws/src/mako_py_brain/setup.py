from setuptools import setup

package_name = 'mako_py_brain'

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
            "BrainNode = mako_py_brain.brain:main",
            "ctrl_panel_node = mako_py_brain.control_panel:main",
            "TTSNode = mako_py_brain.tts:main"
        ],
    },
)
