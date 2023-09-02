import webbrowser
from time import ctime
import os
import playsound
from gtts import gTTS
import speech_recognition as sr

#initialize recongnizer class
r=sr.Recognizer()
##Reading Audio file as source
##listening the audio file and store in audio_text variable
def Bixby_Speek(audios):
    tts=gTTS(text=audios,lang='en',slow=False)
    audioF='audio.mp3'
    tts.save(audioF)
    playsound.playsound(audioF)
    print(audios)
    os.remove(audioF)

def record(ask=False):
    with sr.Microphone(device_index=None) as source:
        r.adjust_for_ambient_noise(source)
        print("record")
        if ask:
            Bixby_Speek(ask)
        audio=r.listen(source)
        voice_data=''
        try:
            voice_data=r.recognize_google(audio,language="en")
        except sr.UnknownValueError:
            Bixby_Speek("Sorry i did not get that")
        except sr.RequestError:
            Bixby_Speek("Sorry Service is Down")
        return voice_data.lower()
    
def Respond(voice_data):
    if 'name' in voice_data or 'my name' in voice_data:
        Bixby_Speek('My name is Mohamed')
    if 'time' in voice_data or 'the time' in voice_data:
        Bixby_Speek(ctime())
    if 'search' in voice_data:
        search =record('search opend')
        url='https://google.com/search?q='+search
        webbrowser.get().open(url)
        Bixby_Speek('Khalsan be shyaka'+search)
    if 'exit' in voice_data:
        exit()
        Bixby_Speek('ahla meca aleek')

    Bixby_Speek('ahla mesa aleek')
   
Bixby_Speek('How can i help you')

while 1:
    voice_data=record()
    Respond(voice_data)
