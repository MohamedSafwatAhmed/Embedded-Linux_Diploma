# This is to demonstration of how you can use the dsahboard.py as a stand-alone 
# application and how to connect the vehical state to the dashboard.

import dashboard 
import keyboard
import serial
import threading

trigger_action = dashboard.TriggerAction()  # creating dashboard trigger

# the below five method should be called before calling launch_dashboard() method to take effect
# note: this below five are optional
trigger_action.set_dashboard_size(980, 600)  # aspect ratio 16:9
trigger_action.hide_creator_button(True)
trigger_action.skip_start_screen(True)
trigger_action.skip_loading_screen(True)
trigger_action.set_speedometer_range(180)

def handle_data(data):
    x=data.decode('utf-8')
    print(x)
    if x == 'A':  # press accelerator
        trigger_action.apply_accelerator()
    if x == 'a':  # press break
        trigger_action.apply_break()
    if x == 'B':  # press horn
        trigger_action.sound_horn()
        trigger_action.set_speed(150)
        trigger_action.set_speedometer_resetter_state(False)
    if x == 'b':  # triger left indicator state
        trigger_action.left_indicator_on_or_off()
    if x == 'C':  # triger right indicator state
        trigger_action.right_indicator_on_or_off()
    # below is how to turn on or off speedometer resetter internal function
    if x == 'c':
        trigger_action.set_speedometer_resetter_state(False)
  
def read_serail(serail_port):
    while True:
        date=serail_port.read()
        if date:
            handle_data(date)
ser=serial.Serial('/dev/ttyUSB0',9600)
thread=threading.Thread(target=read_serail,args=(ser,))
thread.start()

# to show dashboard note: this should be called at end of our code
trigger_action.set_speedometer_range(280)
trigger_action.launch_dashboard()  
print("finished")
