/*
 * autoclick.cxx
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
#include <cstdlib>
using namespace std;
int main(int argc, char **argv)
{
	int clicks = 0;
	int total;
	cout << "Сколько нужно кликов??\n";
	cin >> total;
	
	while (clicks < total)
	{
		//cout << clicks << " из " << total << endl;
		system("xdotool click 1");
		//cout << clicks << " из " << total << endl;
		system("clear");
		cout << clicks << " из " << total << endl;
		system("sleep 0.03");
		//cout << clicks << " из " << total << endl;
		clicks++;
	}
	
	return 0;
}

