/*
 * решатель квадратных уравнений.cxx
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
#include <cmath>
#include <string.h>
#include <time.h>


using namespace std;


int msleep(unsigned long milisec)   
{   
    struct timespec req={0};   
    time_t sec=(int)(milisec/1000);   
    milisec=milisec-(sec*1000);   
    req.tv_sec=sec;   
    req.tv_nsec=milisec*1000000L;   
    while(nanosleep(&req,&req)==-1)   
        continue;   
    return 1;   
}   


int main(int argc, char **argv)
{
	cout << "Привет, если тебе надоело решать квадратные уравнения через дискриминант\nТо я тебе помогу в этом, ты должен ввести три числа\nЭто a b c и всё!!!\n";
	double a;
	double b;
	double c;
	int lol = 0;
	start: ;
	cout << "Введи чило a ";
	cin >> a;
	cout << "\nМолодец, теперь введти b ";
	cin >> b;
	cout << "\nТеперь последнее число c ";
	cin >> c;
	cout << "\nСейчас я высчитаю корень, подожди несколько секунд =)\n";
	msleep(1500);
	double d = b*b-4*a*c;
	if (d < 0){cout << "Корней нет, так как дискриминант меньше нуля, он равен " << d << "\n";}
	if (d == 0){cout << "Корень один, так как дискриминант равен 0 \n";
		cout << "Корень равен " << (-(b))/(2*a) << "\n";}
	if (d > 0){cout << "Корнй будет два, так как дискриминант равен " << d << "\n";
		double sqrtd=sqrt(d);
		cout << "Первый корень " << (-(b)-sqrtd)/(2*a) << "\n";
		cout << "Второй корень " << (-(b)+sqrtd)/(2*a) << "\n";}
	cout << "Будешь продолжать заваливать меня уравнениями?\nПросто напиши да или нет\n";
	string yes_no;
	yes_no: ;
	cin >> yes_no;
	
	if (yes_no == "да"){cout << "Хорошо, тогда\n"; lol=0; goto start;}
	if (yes_no == "нет"){cout << "Рад был помочь, когда понадоблюсь включай =)\n"; return 0;}
	else{
		if(lol == 3){cout << "Я тебя предупреждал...";return 0;}
		if(lol == 2){cout << "Ты прикалываешься, у тебя последний шанс, я верю в тебя, ты сможешь ввести правильный ответ!!!\n"; lol=3; goto yes_no;}
		if(lol == 1){cout << "Думаю ты помнишь, что я тебе говорил, введи пожалуйста да или нет\n"; lol=2; goto yes_no;}
		if(lol == 0){cout << "Ты ввёл неверное слово, повтори ввод, если ты ошибёшся три раза я выключюсь\nВведи заново\n"; lol=1; goto yes_no;}
		
		
}
}
