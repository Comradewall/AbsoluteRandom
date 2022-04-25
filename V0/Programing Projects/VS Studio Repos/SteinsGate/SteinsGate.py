import pyfirmata
import time
board = pyfirmata.Arduino('COM3')
it = pyfirmata.util.Iterator(board)
it.start()
analog_pin = board.get_pin('a:1:i')

while True:
    analog_value = analog_pin.read()
    print(analog_value)
    time.sleep(0.1)
