import speech_recognition as sr
from subprocess import call
import pyfirmata
import datetime
import requests
import json
complete_url = "http://api.openweathermap.org/data/2.5/weather?appid=a45183feed60f244d420ab6dda45d92c&q=Valcea"
response = requests.get(complete_url) 
x = response.json() 
r = sr.Recognizer()
board = pyfirmata.Arduino("/dev/ttyACM0")
mic = sr.Microphone(device_index=13)
call(["espeak","-s140 -ven+18 -z","Welcome user to the thing V0"])
a = 1
while (a>0):
	with mic as source:
		audio = r.listen(source)
	wake_word = r.recognize_google(audio)
	if (wake_word == 'Alexa'):
		with mic as source:
			print("How may I help you?")
			call(["espeak","-s140 -ven+18 -z","How may I help you?"])
			audio = r.listen(source)
		intval = r.recognize_google(audio)
		if (intval == "turn on the lights"):
			board.digital[12].write(0)
			print("The lights are on!")
			call(["espeak","-s140 -ven+18 -z","The lights are on!"])
		elif(intval == "turn off the lights"):
			board.digital[12].write(1)
			print("The lights are off!")
			call(["espeak","-s140 -ven+18 -z","The lights are off!"])
		elif(intval == "what is the time"):
			time1 = datetime.datetime.now()
			time2 = datetime.date.today()
			call(["espeak","-s140 -ven+18 -z","The time is"+str(time1.hour)+"hours"+str(time1.minute)+"minutes"])
			print("The time is "+str(time1.hour)+":"+str(time1.minute))
		elif(intval == "how are you today"):
			print("I am fine thanks. How about you?")
			call(["espeak","-s140 -ven+18 -z","I am fine thanks. How about you?"])
		elif(intval == "can you say after me"):
			call(["espeak","-s140 -ven+18 -z","Sure, say it and i will repeat."])
			print("Sure, say it and I will repeat.")
			with mic as source:
				audio = r.listen(source)
			val = r.recognize_google(audio)
			call(["espeak","-s140 -ven+18 -z",str(val)])
			print(str(val))
		elif(intval == "how is the weather outside"):
			#implement espeak for later but remember to do it
			#will do (12.12.2020 17:39)
				if x["cod"] != "404": 
					y = x["main"] 
					current_temperature_kelvin = y["temp"]
					current_temperature_celsius = float(current_temperature_kelvin) - 273.15
					visual_temp = int(current_temperature_celsius)
					current_pressure = y["pressure"] 
					current_humidiy = y["humidity"] 
					z = x["weather"] 
					weather_description = z[0]["description"] 
					print(" Temperature (in kelvin unit) = " +
						str(visual_temp) + 
					"\n atmospheric pressure (in hPa unit) = " +
						str(current_pressure) +
					"\n humidity (in percentage) = " +
						str(current_humidiy) +
					"\n description = " +
						str(weather_description))
					call(["espeak","-s140 -ven+18 -z","The temperature outside is "+str(visual_temp)+" degrees celsius the atmospheric pressure is "+str(current_pressure)+"pascals the humidity is "+str(current_humidiy)+"precent"])
		elif (intval == "exit"):
			break;
		elif (intval == ""):
			print("oof")
		else: 
			print("Sorry, I couldn't catch that")
			call("espeak","-s140 -ven+18 -z","Sorry i couldn't catch that!")
	else: 
		print("Sorry, I couldn't catch that")
		call("espeak","-s140 -ven+18 -z","Sorry i couldn't catch that!")

