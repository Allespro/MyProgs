from requests import get
#import re # I DNT KNOW NEED I T HEM OR NOT

def GetToken(line):
	text = line.split("\"")
	return text[3]

def GetId(line):
	text = line.split("\"")
	text = text[8].split(":")
	text = text[1].split("}")
	return text[0]

def SendReq(login , password):
	response = get('https://oauth.vk.com/token?grant_type=password&client_id=2274003&client_secret=hHbZxrka2uZ6jB1inYsH&username='+login+'&password='+password)
	response = str(response.content)
	if "username_or_password_is_incorrect" in response:
		exit("NO VALID!")
	elif "need_captcha" in response:
		exit("LOL YOU NEED CAPTCHA!")
	elif "user_id" in response:
		print("\nVALID!\n")
		print("ACCES TOKEN:",GetToken(response))
		print("ID:",GetId(response))
		print("LOGIN:",login)
		print("PASSWORD:",password)
	else:
		print("FKNG UNNAMED ERROR!")
		print("HERE IS RESPONSE")
		print(response)
		exit("BYBY")

if __name__ == "__main__":
	print("GET VK TOKEN AND ID USING THAT TOOL")
	login = str(input("LOGIN: "))
	password = str(input("PASSWORD: "))
	SendReq(login, password)
