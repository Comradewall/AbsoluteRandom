import speech_recognition as sr
r = sr.Recognizer()
mic = sr.Microphone(device_index=13)
with mic as source:
 print("speak")
 audio = r.listen(source)
fval = r.recognize_google(audio)
print(fval)
