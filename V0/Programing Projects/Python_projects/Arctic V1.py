import speech_recognition as sr
from gtts import gTTS
from playsound import playsound
import datetime
import os
language = "en"
rval = ""
r = sr.Recognizer()
mic = sr.Microphone(device_index=13)
def reg():
	global rval
	with mic as source:
		audio = r.listen(source)
	rval = r.recognize_google(audio)
def speech(stext):
	obj = gTTS(text=stext, lang=language, slow=False)
	obj.save("Audio_gTTS.mp3")
	playsound("Audio_gTTS.mp3")
speech("Welcome user to the alpha of the arctic project.")
a=1
while True:
	reg()
	if (rval == "IQ"):
		speech("How may I help you?")
		reg()
		if (rval == "exit"):
			break;
		elif (rval == "what is the time"):
			times = datetime.datetime.now()
			speech("The time is "+str(times.hour())+"hours and"+str(times.minute())+"minutes")
		elif (rval == "Yes"):
			speech("Excuse me but did you have a stroke?")