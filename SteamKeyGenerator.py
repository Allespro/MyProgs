import random
keyword = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0"]

def gener_three():
  return(keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)])

def gener_four():
  return(keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)])

def keycreatorA():
  key = gener_three()
  key2 = gener_three()
  key3 = gener_three()
  f.write(key + "-" + key2 + "-" + key3 + "\n")

def keycreatorB():
  keyB = gener_four()
  keyB2 = gener_four()
  keyB3 = gener_four()
  keyB4 = gener_four()
  keyB5 = gener_four()
  f.write(keyB + "-" + keyB2 + "-" + keyB3 + "-" + keyB4 + "-" + keyB5 + "\n")



print("KeYGeT 1.13")
print("by Allespro")
print("1 - AAAAA-BBBBB-CCCCC")
print("2 - AAAA-BBBB-CCCC-DDDD-EEEE")
inp = input("Choose your number/Выбери походящее число: ")
if (inp == "1"):
    inpA = int(input("How many times to write down the keys?/Сколько ключей сгенерировать?: "))
    f = open("Keys.txt" or "keys.txt" or "key.txt", "w")
    wh = 0
    while wh < inpA:
        wh = wh + 1
        print("Writing key number", wh)
        keycreatorA()
    

elif (inp == "2"):
    inpB = int(input("How many times to write down the keys?/Сколько ключей сгенерировать?: "))
    f = open("Keys.txt" or "keys.txt" or "key.txt", "w")
    wh = 0
    while wh < inpB:
        wh = wh + 1
        print("Writing key number", wh)
        keycreatorB()
else:
  exit("Error input/Ошибочный ввод")
