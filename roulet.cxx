/*
 * time.cxx
 * 
 * Copyright 2018 Unknown <alles@Arch_AMD64>
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
#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>
#ifdef _WIN32
    #include <windows.h>
    #define msleep(x) Sleep(x)
#else
    #include <unistd.h>
    #define msleep(x) usleep(x * 1000)
#endif
using namespace std;
int main()
{
int a;
fstream f("./money.bank");
f >> a;
f.close();
 



	int popmoney;
	int money = 0;
	int allmoney = a;
	int mtime =0;
	int tnumrez;
	int stavka;
	string a1, a2, a3, a4, a5, a6, a7, a8;
	string t1, t2, t3, t4, t5, t6, t7, t8;
	int num1=1, num2=2, num3=3, num4=4, num5=5, num6=6, num7=7, num8=8;
	int tnum1, tnum2, tnum3, tnum4, tnum5, tnum6, tnum7, tnum8;
	a1="\e[6;31;1m1\e[32;m";
	a2="\e[6;32;1m2\e[32;m";
	a3="\e[6;33;1m3\e[32;m";
	a4="\e[6;34;1m4\e[32;m";
	a5="\e[6;35;1m5\e[32;m";
	a6="\e[6;36;1m6\e[32;m";
	a7="\e[6;37;1m7\e[32;m";
	a8="\e[6;30;1m8\e[32;m";
	popolnbal:;
	popmoney =0;
	while (popmoney < 10){
	cout << "Внесите баланс, более 10 монет\n";
    cin >> popmoney;
} money += popmoney;
    allmoney += money;
    
	postavstav:;
	cout << "Ваш баланс " << money;
    cout << "\nВаша ставка?\n";
    cin >> stavka;
    if (stavka > money){cout << "\e[6;31;1mЖульничать плохо!\e[32;m\n";return 0;}
    money -= stavka;
	start:;
   
		f.open("./money.bank", ios::out);
			f << allmoney;
			f.close();
	
	int pis=0;
	int rand1, rand2, randrez=0;
    while (randrez<26){
		srand(time(NULL));
		rand1 = 1 + rand() % 70;
		srand(time(NULL));
		rand2 = 1 + rand() % 5;randrez=rand1-rand2;//*2/3;//rand1/rand2+(rand1-rand2)
    }
    if (randrez<0){randrez *= -1;}
    if (randrez>50){goto start;}
    
    cout << "Ваш баланс " << money << endl;
    
    cout << "Как вы думайте, какое число выпадет? \e[5;29;1m(От 1 до 8)\e[32;m\n";
    cin >> tnumrez;
    if(tnumrez>8 || tnumrez<1){cout << "\e[6;31;1mОТ 1 ДО 8!!!\e[32;m" << endl; goto start;}
	while(1){
		
	cout << "  ▼" << endl;
	cout << a1 << " " << a2 << " " << a3 << "         " << randrez << endl;
	cout << a8 << " " << "\e[5;29;1m⁂\e[32;m" << " " << a4 << endl;
	cout << a7 << " " << a6 << " " << a5 << endl;
	t8=a8; tnum1=num1;
	t7=a7; tnum2=num2;
	t6=a6; tnum3=num3;
	t5=a5; tnum4=num4;
	t4=a4; tnum5=num5;
	t3=a3; tnum6=num6;
	t2=a2; tnum7=num7;
	t1=a1; tnum8=num8;
	
	a1=t8; num1=tnum8;
	a2=t1; num2=tnum1;
	a3=t2; num3=tnum2;
	a4=t3; num4=tnum3;
	a5=t4; num5=tnum4;
	a6=t5; num6=tnum5;
	a7=t6; num7=tnum6;
	a8=t7; num8=tnum7;
	
	if (pis < 15){mtime=150;}
	if (pis > 15){mtime=170;}
	if (pis > 25 && pis > 14){mtime=300;}
	if (pis > 28 && pis > 24 && pis > 14){mtime=500;}
	msleep(mtime);randrez--;
	if (randrez==0){cout << "Выпало число " << a3 <<endl;cout << "Вы загадывали число " << tnumrez << endl;
	if (num3 == tnumrez){cout << "\e[5;29;1mВы отгадали!!!\e[32;m\n";
		int randvipl;
		srand(time(NULL));
		randvipl = 1 + rand() % 10;
		
		
		if (randvipl == 3){money += stavka*7; cout << "Ван очень крупно повезло!!! Вы получйте " << stavka*7 << " монет!!!\n";}
		else{money+=stavka*3;cout << "Вы получайте " << stavka*3 << " монет!!!\n" << endl;}
		
		
		 cout << "Ваш баланс " << money << endl;}
	else {cout << "\e[5;29;1mВы не отгадали\e[32;m" << endl << "Ваш баланс " << money << endl;} goto end;}

	system("clear");
	pis++;
	
}
cout << "Ваш баланс " << money << endl;
end:;

cout << "(1) Покрутить ещё раз\n(2) Сделать выплату\n(3) Выйти\n";
int end;
cin >> end;
switch(end)
{
	case 1:
	if (money < 1){poperr:;cout << "На счету мало монет! ("<< money << ")\nВнести баланс?\n(1) Да\n(2) Нет\n"; int pop; cin >> pop;
		switch (pop){
			case 1:
			goto popolnbal;
			break;
			case 2:
			return 0;
			break;
			
			default:
			goto poperr;
			break;
		}}
		else{
			
	system("clear");
	goto postavstav;
}
	break;
	case 2:
	if (money == 0){cout << "\e[6;31;1mОШИБКА ВЫПЛАТЫ, НА БАЛАНСЕ 0 МОНЕТ!\e[32;m"; return 0;}
	if(money > allmoney){
		cout << "На счету банка не достатачно средств, вам бдет выплачен весь банк, в размере " << allmoney << " р" << endl;
		money=0;
		f.open("./money.bank", ios::out);
			f << allmoney;
			f.close();
	return 0;}
	allmoney -= money;
	cout << "Монет в банке осталось " << allmoney << endl;
	money = 0;
	f.open("./money.bank", ios::out);
			f << allmoney;
			f.close();
	return 0;
	case 3:
	f.open("./money.bank", ios::out);
			f << allmoney;
			f.close();
	return 0;
	break;
	default:
	goto end;
	break;
}

}
