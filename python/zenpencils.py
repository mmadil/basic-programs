import urllib
import mechanize
from bs4 import BeautifulSoup as bs

BASE_URL = 'http://zenpencils.com/comic/134-the-universal-declaration-of-human-rights/'
br = mechanize.Browser()
br.addheaders = [('User-agent', 'Firefox')]

response = br.open(BASE_URL)
html = response.read()
soup = bs(html)
menu = soup.find(id="archive_dropdown-3")

links = []

print "Collecting links..."
for link in menu.find_all('option'):
    links.append(link.get('value'))

for link in links:
    response = br.open(link)
    html = response.read()
    soup = bs(html)
    print 'Extracting ...', soup.title.get_text()
    image_src = soup.find('img').get('src')
    urllib.urlretrieve(image_src, str('zenpencils/'+soup.title.get_text().encode('utf-8')+'.jpg'))

