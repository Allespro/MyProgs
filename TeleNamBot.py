#!/usr/bin/env python
import urllib.request
from bs4 import BeautifulSoup

class text:
	red= '\x1b[31m'
	green	=	'\x1b[32m'
	yellow = '\x1b[33m'
	dark_blue = '\x1b[34m'
	purpur = '\x1b[35m'
	light_blue = '\x1b[36m'
	orange = '\x1b[38;5;208;1m'
    
	invert = '\x1b[7m'
	glitch = '\x1b[5m'
	line = '\x1b[4m'
	strong = '\x1b[1m'
	end = '\x1b[0m'

class code:
	allow = text.green + "ДОСТУПНО" + text.end
	taken = text.orange + "ЗАНЯТО" + text.end
	error = text.red + "ОШИБКА" + text.end
	noname = text.yellow + "НЕДОПУСТИМОЕ ИМЯ" + text.end

print(text.strong + text.orange +
'''
 ______    __    _  __           ___       __ 
/_  __/__ / /__ / |/ /__ ___ _  / _ )___  / /_
 / / / -_) / -_)    / _ `/  ' \\/ _  / _ \\/ __/
/_/  \\__/_/\\__/_/|_/\\_,_/_/_/_/____/\\___/\\__/ 
''' + text.light_blue + '''
  _         __                           
 |_)       /  \\  _. | |  _   _ ._  ._ _  
 |_) \\/   | (|/ (_| | | (/_ _> |_) | (_) 
     /     \\__                 |         
''' + text.end
)

f = open('namelist.txt')
for line in f.readlines():
	line = line.replace("\n", "")
	if(len(line) < 5):
		print(text.strong, line, code.noname)
	else:
		url = ("https://t.me/%s" % line)
		req = urllib.request.Request(
			url,
			data=None,
			headers={
				'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:67.0) Gecko/20100101 Firefox/67.0'
			}
		)
		try:
			query = urllib.request.urlopen(req)
			query = query.read().decode('utf-8')
			soup = BeautifulSoup(query, 'html.parser')
			if 'content=\"Telegram: Contact' in soup.prettify():
				print(text.strong,line, code.allow)
			else:
				print(text.strong,line, code.taken)
		except urllib.request.HTTPError as e:
			if e.code == 404:
				print(text.strong,line, code.allow)
			else:
				print(text.strong, line, code.error)
