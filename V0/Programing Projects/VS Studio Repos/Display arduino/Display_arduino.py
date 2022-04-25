import serial
import sys
import time
arduino = serial.Serial('COM3', 9600, timeout=0)
stringa = 'hello'
arduino.write(bytes(stringa,'UTF-8'))
arduino.close()