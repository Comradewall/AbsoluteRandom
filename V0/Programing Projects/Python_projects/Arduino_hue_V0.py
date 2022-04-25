from pyfirmata import Arduino, util, STRING_DATA
import time
board = Arduino("/dev/ttyACM0")
def msg(text)
   if text:
   	board.send_sysex(STRING_DATA, util.str_to_two_byte_iter(text))
msg("Shark goes a...")