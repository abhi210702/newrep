import pyautogui
import time
time.sleep(5)
with open("code.txt",'r')as f:
    lines = f.readlines()
    for line in lines:
# print(line.lstrip())
        pyautogui.write(line.lstrip())