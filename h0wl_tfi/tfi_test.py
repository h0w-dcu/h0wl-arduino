from pyfirmata import Arduino, SERVO, util
from time import sleep

port = 'COM7'
pin = 5  # Digital 5
board = Arduino(port)
print(board.get_firmata_version)

while True:
    board.digital[3].write(1)
    board.digital[4].write(1)
    sleep(0.5)
    board.digital[3].write(0)
    board.digital[4].write(0)
    sleep(0.5)
