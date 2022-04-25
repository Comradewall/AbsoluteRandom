import discord
import pyfirmata
from hentai import Utils,Sort,Hentai,Format
client = discord.Client()
board = pyfirmata.Arduino('COM3')
# fa mihai din viitor vezi ca i trb declarat in async loop 
i=0
def onoff():
    if (i==1):
        i=1+i
        board.digital[13].write(1)
    elif (i==2):
        i=1-i
        board.digital[13].write(0)
    else:
        i=0
        i=3+i
        board.digital[13].write(0)
# I don't wanna know why I don't need to know why but this is a monstrosty 
@client.event
async def on_ready():
    print('We have logged in as {0.user}'.format(client))
@client.event
async def on_message(message):
    i=0
    if message.author == client.user:
        return
    
    if message.content.startswith('*uwu'):
        await message.channel.send('UwU Hewo mawster!!')
    elif message.content.startswith("*speer"):
        await message.channel.send("https://cdn.discordapp.com/attachments/752974970405257216/771584054750871552/IMG_20201014_102702_301.jpg")
    elif message.content.startswith('*random'):
        henta=Utils.get_random_id()
        Hentai1=Hentai(henta)
        url=Hentai1.url
        await message.channel.send(str(henta))
        await message.channel.send(str(url))
    elif message.content.startswith('*Arduino pin13'):
        i=i+1
        onoff()
        if (i==3):
            await message.channel.send('Err1 Pwese cowntact twe devwepel!!!')
        else:
            await message.channel.send('Done pin 13 on COM3 set High')
client.run('NzQzMzE4MjQyMDYzMjg2Mzcz.XzS7Dw.x1b0jiCiqm23ICkbvvHp2CHAlcU')
