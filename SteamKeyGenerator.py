import random

randomLetter = lambda:chr(random.choice(list(range(48,58))+list(range(65,91))))
def genKey(x,y):
    temp = ""
    for i in range(x):
        for j in range(y):
            temp += randomLetter()
        temp+="-"
    return temp[:-1]

print("""KeYGeT 1.13
by Allespro
1 - AAAAA-BBBBB-CCCCC
2 - AAAA-BBBB-CCCC-DDDD-EEEE""")

inp = input("Choose your number/Выбери походящее число: ")
choice = {"1":(3,5),"2":(5,4)}
try:
    choice[inp]
    inpA = int(input("How many times to write down the keys?/Сколько ключей сгенерировать?: "))
    f = open("Keys.txt" or "keys.txt" or "key.txt", "w")
    for i in range(1,inpA+1):
        print("Writing key number", i)
        f.write(genKey(choice[inp][0],choice[inp][1])+"\n")
    f.close()
    input("Press enter to exit...")
except BaseException:
    print("Error input/Ошибочный ввод")
    input("Press enter to exit...")
