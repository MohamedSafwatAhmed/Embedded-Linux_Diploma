import pyautogui
import time
extentions_list=['clangd','c++ Testmate','c++ helper','cmake','cmake tools']
##############################
def install_extension(extension):
    pyautogui.click(x=277,y=166)
    pyautogui.hotkey('ctrl','a')
    pyautogui.hotkey('backspace')
    pyautogui.typewrite(extension)
    pyautogui.press('enter')
    time.sleep(5)
    pyautogui.moveTo(x=252,y=245,duration=0.5)
    pyautogui.click()
    time.sleep(2)
    pyautogui.click(x=889,y=314)
    time.sleep(4)
##################################
pyautogui.hotkey('ctrl','alt','t')
time.sleep(5)
pyautogui.typewrite('code')
pyautogui.press('enter')
pyautogui.hotkey('ctrl','Shift','x')
time.sleep(2)
for p in extentions_list:
    install_extension(p)

