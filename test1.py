import urllib
from PIL import Image
import os
import sys
import commands

urllib.urlretrieve("https://www.irctc.co.in/eticketing/captchaImage","irctc.png")
usrimg = Image.open('irctc.png')

captcha = usrimg.convert('L')
captcha.save('temp.bmp')

commands.getoutput('tesseract temp.bmp data')

with open('data.txt','r') as data:
	print data.readline().strip()
 