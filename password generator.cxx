/*
 * генератор паролей.cxx
 * 
 * Copyright 2018 Unknown <alles@archlinux>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

class PassGen {

public:
    void displayMessage()
    {
        int passLenght;
        int numOfPasswords;
        char * filename = new char;

        cout << "Введите длину пароля для генерации: ";
        cin >> passLenght;
        cout << "Введите количество паролей для генерации: ";
        cin >> numOfPasswords;
        cout << "Будет сгенерировано паролей: " << numOfPasswords << "." << endl;
        cout << endl;
        cout << "Введите имя файла для записи: ";
        cin >> filename;

        std::ofstream outFile(filename);

        for (int k = 0; k < numOfPasswords; k++) {
            for (int i = 0; i < passLenght; ++i) {    
                numOfChars(passLenght);
                passGenerator(passLenght);
                outFile << password [i];
                cout << password[i];
            }
            outFile << endl;
        }
        outFile.close();

        cout << "Пароли успешно сгенерированы и записаны в файл " << filename << "" << endl;
    }

    void passGenerator(int passLenght)
    {
        password = new char [passLenght];

        for (int i = 0; i < numOfNumbers; ++i) {
            password [i] = char(rand() % 10 + 48);
        }
        for (int i = numOfNumbers; i < numOfNumbers + numOfBigChars; ++i) {
            password [i] = char(rand() % 26 + 65);
        }
        for (int i = numOfNumbers + numOfBigChars; i < passLenght; ++i) {
            password [i] = char(rand() % 26 + 97);
        }
         std::random_shuffle(password, password + passLenght);        
    }

    void numOfChars(int passLenght)
    {
        numOfSmallChars = rand() % passLenght;
        int charRandEnd = passLenght - numOfSmallChars;
        numOfBigChars = rand() % charRandEnd;
        numOfNumbers = passLenght - numOfSmallChars - numOfBigChars;
    }

private:
    int numOfSmallChars;
    int numOfBigChars;
    int numOfNumbers;
    char * password;
};

int main()
{
    srand(time(NULL));
    PassGen * pass = new PassGen;
    pass->displayMessage();
    return 0;
}
