from pyfirmata import Arduino, util, STRING_DATA
import requests, json
board = Arduino('')
def msg( text ):
    if text:
        board.send_sysex( STRING_DATA, util.str_to_two_byte_iter( text ) )
api_cheie = "a45183feed60f244d420ab6dda45d92c"
burl = "http://api.openweathermap.org/data/2.5/weather?"
nume_oras = input("Enter city name : ") 
comp_url = burl + "appid=" + api_cheie + "&q=" + nume_oras
raspuns = requests.get(comp_url) 
x = raspuns.json() 
if x["cod"] != "404": 
    y = x["main"] 
    temperatura_kelvin = y["temp"]
    temperatura_celsius = temperatura_kelvin - 273.15
    presiune_hecto_pascal = y["pressure"]
    presiune_mmHg = presiune_hecto_pascal * 1.333
    umiditate = y["humidity"] 
    z = x["weather"] 
    descriere = z[0]["description"] 
  
    print(" Temperatura (in celsius) = " +
                    str(current_temperature) + 
          "\n Presiune Atmosferica (in mmHg) = " +
                    str(current_pressure) +
          "\n umiditate (in %) = " +
                    str(current_humidiy) +
          "\n descriere = " +
                    str(weather_description))
    msg(str(temperatura_celsius) + "C")
else: 
    print(" Orasul nu a fost gasit ") 