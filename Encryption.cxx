/*
 * Шифрование.cxx
 * 
 * Copyright 2017 Unknown <alles@Arch_AMD64>
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
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char msg[300];
	cout << "Введите сообщение\n";
	cin.get (msg, 300);
	char key;
	cout << "Введите кей\n";
	cin >> key;
	cout << "Исходное сообщение: " << msg << "\n";
	for(int i=0; i < strlen(msg); i++)
	msg [i] = msg [i] ^ key;
	cout << "Закодированное сообщение: " << msg << "\n" ;
	for(int i=0; i < strlen(msg); i++)
	msg [i] = msg [i] ^ key;

	return 0;
}
