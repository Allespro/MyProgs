from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.common.by import By
from selenium.common.exceptions import TimeoutException as TmEx
import time
import random





def logo():
	print("""

/$$$$$$$$                     /$$$$$$$              /$$    
|_____ $$                     | $$__  $$            | $$    
     /$$/   /$$$$$$  /$$$$$$$ | $$  \\ $$  /$$$$$$  /$$$$$$  
    /$$/   /$$__  $$| $$__  $$| $$$$$$$  /$$__  $$|_  $$_/  
   /$$/   | $$$$$$$$| $$  \\ $$| $$__  $$| $$  \\ $$  | $$    
  /$$/    | $$_____/| $$  | $$| $$  \\ $$| $$  | $$  | $$ /$$
 /$$$$$$$$|  $$$$$$$| $$  | $$| $$$$$$$/|  $$$$$$/  |  $$$$/
|________/ \\_______/|__/  |__/|_______/  \\______/    \\___/ 

By Allespro

""")

def open_web(link, proxy_str):
	try:
		chrome_options = webdriver.ChromeOptions()
		chrome_options.add_argument("--start-maximized")
		chrome_options.add_argument('headless')
		chrome_options.add_argument('--proxy-server=http://' + proxy_str)
		chrome = webdriver.Chrome(options=chrome_options)
		wait = WebDriverWait(chrome, 5)
		chrome.get(link)
		wait.until(EC.visibility_of_element_located((By.ID, "text")))
	except TmEx:
		ran = random.randint(41,53) # Время просмотра (рандом от и до)
		for x in range(1,ran):
			print(x,"/",ran)
			time.sleep(1)
		chrome.stop_client()
		chrome.quit()

		


def main():
	proxy_file = input("Пожалйста введите файл со списком пркси: ")
	zen_graph = input("Введите ссылку на статью: ") #"http://2ip.ru" # 
	f = open(proxy_file)
	line = f.readline()
	while line:
		print(line)
		open_web(zen_graph, line)
		line = f.readline().replace("\n", "")
	f.close()

if __name__ == '__main__':
	logo()
	main()
