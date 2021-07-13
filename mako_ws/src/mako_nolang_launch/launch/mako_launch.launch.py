from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    brain_node = Node(
        package="mako_py_brain",
        executable="BrainNode"
    )

    tts_node = Node(
        package="mako_py_brain",
        executable="TTSNode"
    )

    ctrl_panel_node = Node(
        package="mako_py_brain",
        executable="ctrl_panel_node"
    )

    led_control_node = Node(
        package="mako_py_feedback_actuators",
        executable="ledControlNode"
    )

    servo_control_node = Node(
        package="mako_py_feedback_actuators",
        executable="servoControlNode"
    )

    motor_control_node = Node(
        package="mako_py_feedback_actuators",
        executable="motorControlNode"
    )

    serial_interface_node = Node(
        package="mako_py_serial_interface",
        executable="serialInterfaceNode"
    )


    
    ld.add_action(brain_node)
    ld.add_action(tts_node)
    ld.add_action(ctrl_panel_node)
    ld.add_action(led_control_node)
    ld.add_action(servo_control_node)
    ld.add_action(motor_control_node)
    ld.add_action(serial_interface_node)


    return ld
