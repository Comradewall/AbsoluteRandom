import pyfirmata
import speech_recognition as sr
from gtts import gTTS
import os
board = pyfirmata.Arduino('/dev/ttyACM0')
r = sr.Recognizer()
mic = sr.Microphone(device_index=6)
a=1
while a>0:
 with mic as source:
	  print("What can i help you with...")
	  audio = r.listen(source)

 command = r.recognize_google(audio)
 print(command)

 if (command == "turn the lights on"):
 	  board.digital[12].write(0)
 	  text1 = "the lights are on!"

 elif (command == "turn the lights off"):
	  board.digital[12].write(1)
	  text2 = "the lights are off!"

 elif (command == "exit"):
 	break
 	
 else: print("I cant help you with that...")
 

