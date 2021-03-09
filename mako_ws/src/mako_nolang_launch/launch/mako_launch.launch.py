from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    brain_node = Node(
        package="mako_py_brain",
        executable="BrainNode"
    )

    led_control_node = Node(
        package="mako_py_feedback_actuators",
        executable="ledControlNode"
    )

    ld.add_action(brain_node)
    ld.add_action(led_control_node)

    return ld
