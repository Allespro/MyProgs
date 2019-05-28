def main():
        name = input("Введите имя файла: ")
        what = input("Какой символ заменить: ")
        to = input("На какой заменить: ")
        newfile = input("Новое имя файла: ")
        file = open(name)
        handle = open(newfile, "w")
        for line in file.readlines():
                handle.write(line.replace(what, to))
        handle.close()

if __name__ == "__main__":
        main()