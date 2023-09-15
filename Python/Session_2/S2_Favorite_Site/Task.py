import webbrowser
from main import site

def firefox(url):
    webbrowser.open_new_tab(url)
    webbrowser.open_new(url)

favourit_url=['https://docs.python.org',
              'https://web.facebook.com/?_rdc=1&_rdr',
              'https://www.youtube.com/',
              'https://www.instagram.com/',
              'https://www.wikipedia.org/']


    
if site == 'Python' :
    url=favourit_url[0]
elif site == 'Facebook':
    url=favourit_url[1]
elif site == 'Youtube':
    url=favourit_url[2]
elif site == 'Instgram':
    url=favourit_url[3]
elif site == 'Wiki':
    url=favourit_url[4]
else:
    pass
firefox(url)
