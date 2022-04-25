import pyfirmata
import datetime
import time
board = pyfirmata.Arduino('COM3')
board.digital[6].write(1)
board.digital[9].write(1)
time1 = datetime.datetime.now()
hour = time1.hour
hour2 = input('Ora alearmei: ')
minute = time1.minute
minute2 = input('Minutul alarmei: ')
import time

def wait_until(somepredicate, timeout, period=0.25, *args, **kwargs):
  mustend = time.time() + timeout
  while time.time() < mustend:
    if somepredicate(*args, **kwargs): return True
    time.sleep(period)
  return False

res = wait_until(lambda: hour==hour2 and minute==minute2 ,9999999)
if (not res):
    print ('timed out')
