import pyautogui
import time

pyautogui.moveTo(x=45,y=160)
pyautogui.click()
time.sleep(10)
pyautogui.moveTo(x=472,y=119)
pyautogui.click()
pyautogui.write('gmail.com')
pyautogui.hotkey('enter')
time.sleep(25)
pyautogui.moveTo(x=926,y=249)
pyautogui.click()
pyautogui.moveTo(x=669,y=248)
pyautogui.click()

