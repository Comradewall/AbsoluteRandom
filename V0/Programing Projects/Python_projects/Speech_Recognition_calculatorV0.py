import speech_recognition as sr
r = sr.Recognizer()
mic = sr.Microphone(device_index=6)
print("Voice based calculator V0")
with mic as source:
 print("First val...")
 audio = r.listen(source)
val1 = r.recognize_google(audio)
with mic as source:
 print("Second val...")
 audio = r.listen(source)
val2 = r.recognize_google(audio)
with mic as source:
 print("Operation...(eg. sum,minus,times)")
 audio = r.listen(source)
op = r.recognize_google(audio)
if (op == 'plus'):
	fval = int(val1)+int(val2)
	print(favl)
elif (op == 'minus'):
	fval = int(val1)-int(val2)
	print(fval)
elif (op == 'times'):
	fval = int(val1)*int(val2)
	print(fval)
else:
	print("Err1 invald voice val...")
	print(val1)
	print(val2)
	print(op)
