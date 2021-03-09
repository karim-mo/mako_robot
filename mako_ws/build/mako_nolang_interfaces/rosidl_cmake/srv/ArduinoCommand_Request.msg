# This will be our shared arduino service request/response
# cmd_type is used for defining what we want to control in that specific message
# example: cmd_type = "LED" is specific to DOT Matrix control
# cmd_type = "MOTOR" is specific to driving motors

# Response would always be a success boolean indicating the server receiving the command

# If you want to add driver specific fields, add them to your group of variables
# example:
# string cmd_type
# int led_num
# bool led_state
# int motor_num
# bool motor_state

# The above example shows that the first 2 fields(after cmd_type) are for the led contol while the last 2 fields are related to motor control
# Adding fields related to led control should ONLY go among the fields of led control and same goes for motors or any other drivers

string cmd_type
string led_exp_type
