from pyfirmata import Arduino, SERVO, util
from time import sleep

port = 'COM7'
pin = 10  # Digital 10
board = Arduino(port)

board.digital[pin].mode = SERVO

def rotate_servo(pin, angle):
    board.digital[pin].write(angle)
    sleep(0.015)

while True:
    x = input("Choose angle from [1, 2, 3]")
    if x == "1":
        for i in range(0, 180):
            rotate_servo(pin, i)
    if x == "2":
        for i in range(0, 90):
            rotate_servo(pin, i)
    if x == "3":
        for i in range(0, 270):
            rotate_servo(pin, i)
