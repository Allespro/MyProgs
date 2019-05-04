import random
keyword = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","1","2","3","4","5","6","7","8","9","0"]

def keycreatorA():
  key = keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)]
  key2 = keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)]
  key3 = keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)] + keyword[random.randint(0,35)]
  f.write(key + "-" + key2 + "-" + key3 + "\n")

def keycreatorB():
  keyB = keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)]
  keyB2 = keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)]
  keyB3 = keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)]
  keyB4 = keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)]
  keyB5 = keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)] + keyword[random.randint(0, 35)]
  f.write(keyB + "-" + keyB2 + "-" + keyB3 + "-" + keyB4 + "-" + keyB5 + "\n")



print("KeYGeT 1.12")
print("by Artem Grigorev")
print("1 - AAAAA-BBBBB-CCCCC")
print("2 - AAAA-BBBB-CCCC-DDDD-EEEE")
inp = input("Choose your number/Выбери походящее число: ")
if inp == "1":
    inpA = int(input("How many times to write down the keys?/Сколько ключей сгенерировать?: "))
    f = open("Keys.txt" or "keys.txt" or "key.txt", "w")
    wh = 0
    while wh < inpA:
        wh = wh + 1
        print("Writing...")
        keycreatorA()
    

if inp == "2":
    inpB = int(input("How many times to write down the keys?/Сколько ключей сгенерировать?: "))
    f = open("Keys.txt" or "keys.txt" or "key.txt", "w")
    wh = 0
    while wh < inpB:
        wh = wh + 1
        print("Writing...")
        keycreatorB()
