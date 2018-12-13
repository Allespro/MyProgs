/*
 * БОМЖ.cxx
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
#include <cstdlib>
using namespace std;
int main()
{
	int sluchay;
	
	bool kaska, metla, kist, ucheb, komp;
	kaska = metla = kist = false;
	string predm;
	int money = 401;
	int life = 10;
	int maxlife = 100;
	int lvl = 1;
	int opit = 0;
	int perehodopit = 100;
	cout << "Привет, это симулятор развития человека,\nЯ пока недоработан и по этому не сохраняю результат, но всё впереди!!!\nКак будут звать твоего героя? Имя пиши одним словом.\n";
	string name;
	cin >> name;system ("clear");
	cout << "Привет " << name << endl;
	
	start:;
	
	srand(time(NULL));
    sluchay = 1 + rand() % 500;

    switch(sluchay)
    {
    	case 1:
    		cout << "На Землю упал метеорит, человечество исчезло...\n"; return 0;
    	break;

    	case 2:
    		cout << "Ты нашёл 1000 рублей, ураааа!!!!\n"; money += 1000;
    	break;

    	case 3:
    		cout << "Инопланетяне провели над тобой опыт, твой урвень развития стал просто огромен!!!!\nЯ пошутил, твоего персонажа больше нет, он в другой галактике.\n"; return 0;
    	break;

    	case 4:
    		cout << "Ты получил новый урвень развития\n"; lvl++; cout << "Твой урвень развития " << lvl << endl;
    	break;

    	default:
    	break;
    }

	if(money <= 0)
		{
			system ("clear"); cout << "У тебя не осталось денег\n"; cout << name << " помер...\n"; return 0;
		}

	if(life <= 0)
		{
			system ("clear"); cout << "У тебя не осталось сил\n"; cout << name << " помер...\n"; return 0;
		}

	if(life > maxlife)
		{
			life = maxlife;
		}

	if(opit >= perehodopit)
		{
			lvl++; opit = 0; perehodopit += 100;
		}

	cout << "Твоя сила: " << life << " максимум " << maxlife << "\n";
	cout << "Твой урвень развития " << lvl << "\nТвой опыт " << opit << "\nДо следующего уровня " << perehodopit - opit << " опыта" << endl;
	cout << "У тебя есть " << money << " рублей, что будем делать?\n";
	
	cout << "\n(1)Пойти в магазин\n";
	cout << "(2)Просить денег у прохожих\n";
	cout << "(3)Магазин предметов\n";
	cout << "(4)Пойти учиться\n";
	cout << "(5)Пойти на работу\n\n";
	
	
	int vibr;
	cin >> vibr;
	
	switch(vibr)
	{
		case 1:
			goto shop;
		break;

		case 2:
			goto street;
		break;
	
		case 3:
			goto workshop;
		break;
	
		case 4:
			goto learn;
		break;
	
		case 5:
			goto work;
		break;

		default:
		system ("clear"); cout << "Ты ввёл не то число, введи заново.\n"; goto start;
		break;
	}
	
	
    shop:;
    system ("clear");
    cout << "Твои деньги " << money << " рублей\nТвоя сила " << life << "\n\nВ мазазине продаётся:\n\n";
    cout << "(1)Хлеб - 15 рублей(+20 силы)\n";
    cout << "(2)Сухарики - 10 рублей(+5 силы)\n";
    cout << "(3)Вода - 20 рублей(+25 силы)\n";
    cout << "(4)Витамины 100 рублей(+100 силы)\n";
    cout << "(5)Горбушка хлеба 5 рублей(+5 силы)\n";
    cout << "(6)Элексир добавления силы 300 рублей(+20 к максимальному количеству силы)\n\n";
    cout << "(0)Выйти из магазина\n\n";
    cin >> vibr;
    if(vibr == 0){system ("clear");goto start;}
    
    if(vibr == 1){
		
		if(money < 15){system ("clear");cout << "Не хватает денег";goto shop;} 
		system ("clear");cout << "Ты купил хлеб\n"; money -= 15; life += 20;
		goto start;
		}
	if(vibr == 2){
		
		if(money < 10){system ("clear");cout << "Не хватает денег";goto shop;}
		system ("clear");cout << "Ты купил сухарики\n"; money -= 10; life += 5;
		goto start;
		}
    if(vibr == 3){
		
		if(money < 20){system ("clear");cout << "Не хватает денег";goto shop;}
		system ("clear");cout << "Ты купил воду\n"; money -= 20; life += 25;
		goto start;
		}
    if(vibr == 4){
		
		if(money < 100){system ("clear");cout << "Не хватает денег";goto shop;}
		system ("clear");cout << "Ты купил витамины\n"; money -=100; life +=100;
		goto start;
		}
    if(vibr == 5){
		
		if(money < 5){system ("clear");cout << "Не хватает денег";goto shop;}
		system ("clear");cout << "Ты купил горбушку хлеба\n"; money -= 5; life += 5;
		goto start;
		}
		
	if(vibr == 6){
		
		if(money < 300){system ("clear");cout << "Не хватает денег";goto shop;}
		system ("clear");cout << "Ты купил элексир добавления силы\n"; money -= 300; maxlife += 20;
		goto start;
		}
		
    else {cout << "Ты ввёл не то число, повтори ввод\n";system ("clear");goto shop;}
    
    street:;
    int chanse;
    int chansemoney;
    srand(time(NULL));
    chanse = 1 + rand() % 4;
    chansemoney = 1 + rand() % 50;
    if (chanse > 2) {system ("clear"); cout << "Тебе повезло, ты заработал " << chansemoney << " рублей!!!\nТы потерял 5 силы\n\n"; money += chansemoney; life -= 5;  goto start;}
    else {system ("clear"); cout << "Тебя побили и отобрали " << chansemoney << " рублей!!!\nТы потерял 15 силы\n\n"; money -= chansemoney; life -= 15; goto start;}
    
    workshop:;
    system ("clear");
    cout << "Твои деньги " << money << " рублей\nТвои предметы" << endl << predm << endl;
    cout << "(1)Метла - 100 рублей\n";
    cout << "(2)Каска - 300 рублей\n";
    cout << "(3)Кисточка - 70 рублей\n";
    cout << "(4)Учебники - 200 рублей\n";
    cout << "(5)Компьютер - 600 рублей\n\n";
    
    cout << "(0) Выйти из магазина\n\n";
    cin >> vibr;
    if(vibr == 0){system ("clear");goto start;}
    
     if(vibr == 1){
		
		if(money < 100){system ("clear");cout << "Не хватает денег";goto workshop;}
		if(metla == true){system ("clear");cout << "Метла уже была куплена\n";goto workshop;}
		system ("clear");cout << "Ты купил метлу\n"; money -= 100; metla = true; predm = predm + "\n		Метла\n";
		goto start;
		}
		
	if(vibr == 2){
		if(money < 300){system ("clear");cout << "Не хватает денег";goto workshop;}
		if(kaska == true){system ("clear");cout << "Каска уже была куплена\n";goto workshop;}
		system ("clear");cout << "Ты купил каску\n"; money -=300; kaska = true; predm = predm + "\n		Каска\n";
		goto start;
		}
		
	if(vibr == 3){
		if(money < 70){system ("clear");cout << "Не хватает денег";goto workshop;}
		if(kist == true){system ("clear");cout << "Кисть уже была куплена\n";goto workshop;}
		system ("clear");cout << "Ты купил кисть\n"; money -= 70; kist = true; predm = predm + "\n		Кисть\n";
		goto start;
		}
		
	if(vibr == 4){
		if(money < 200){system ("clear");cout << "Не хватает денег";goto workshop;}
		if(ucheb == true){system ("clear");cout << "Учебники уже были куплены\n";goto workshop;}
		system ("clear");cout << "Ты купил учебники\n"; money -= 200; ucheb = true; predm = predm + "\n		Учебники\n";
		goto start;
		}
		
	if(vibr == 5){
		if(money < 600){system ("clear");cout << "Не хватает денег";goto workshop;}
		if(komp == true){system ("clear");cout << "Компьютер уже был куплен\n";goto workshop;}
		system ("clear");cout << "Ты купил компьютер\n"; money -= 600; komp = true; predm = predm + "\n		Компьютер\n";
		goto start;
		}
		
		
		else {cout << "Ты ввёл не то число, повтори ввод\n";system ("clear");goto workshop;}
    work:;
    system ("clear");
    cout << "Твои деньги " << money << " рублей\nТвой урвень развития\nТвои предметы" << endl << predm << endl;
    cout << "(1)Подметать улицы (Нужна метла и урвень развития 2 или больше, +100 рублей, -20 силы)\n";
    cout << "(2)Красить заборы (Нужна кисть и урвень развития 3 или больше, +120 рублей, -15 силы)\n";
    cout << "(3)Работать на стройке (Нужна каска и урвень развития 5 или больше, +500 рублей, -70 силы)\n\n";
    
    cout << "(0) Вернуться назад\n\n";
    
    cin >> vibr;
    if(vibr == 0){system ("clear");goto start;}
    
    if(vibr == 1){
		
		if(lvl < 2){system ("clear");cout << "Не хватает уровня развития\n";goto work;}
		if(life < 20){cout << "Мало силы\n";}
		if(metla == false){cout << "Нет метлы\n";goto work;}
		system ("clear");cout << "Ты заработал 100 рублей и потерял 20 силы\n"; money += 100; life -= 20; opit += 1;
		goto start;
		}
		
	if(vibr == 2){
		
		if(lvl < 3){system ("clear");cout << "Не хватает уровня развития\n";goto work;}
		if(life < 15){cout << "Мало силы\n";goto work;}
		if(kist == false){cout << "Нет кисти\n";goto work;}
		system ("clear");cout << "Ты заработал 120 рублей и потерял 15 силы\n"; money += 120; life -=15; opit +=1;
		goto start;
		}
		
	if(vibr == 3){
		
		if(lvl < 5){system ("clear");cout << "Не хватает уровня развития\n";goto work;}
		if(life < 70){cout << "Мало силы\n";goto work;}
		if(kaska == false){cout << "Нет каски\n";goto work;}
		system ("clear");cout << "Ты заработал 500 рублей и потерял 70 силы\n"; money += money + 100; life -= 70; opit += 1;
		goto start;
		}
	else {cout << "Ты ввёл не то число, повтори ввод\n";system ("clear");goto work;}
	
	learn:;
	system ("clear");
    cout << "Твой урвень развития " << lvl << "\nТвой опыт " << opit << "\nДо следующего уровня " << perehodopit - opit << " опыта" << endl;
    cout << "Твои предметы" << endl << predm << endl << endl;
    cout << "(1)Читать познавательные журналы (+15 опыта -35 рублей -10 силы)\n";
    cout << "(2)Читать статьи в интернете (+30 опыта -20 силы Нужен компьютер Нужен урвень развития выше чем 3)\n";
    cout << "(3)Ходить на курсы в институт (+80 опыта -70 рублей -50 силы Нужны учебники, нужен урвень развития выше чем 5)\n\n";
    
    cout << "(0) Вернуться назад\n\n";
    cin >> vibr;
    if(vibr == 0){system ("clear");goto start;}
    if(vibr == 1){
		
		if(lvl < 1){system ("clear");cout << "Не хватает уровня развития\n";goto learn;}
		if(life < 10){cout << "Мало силы\n";}
		system ("clear");cout << "Ты заработал 15 опыта, потерял 10 силы и 35 рублей \n"; money -= 35; life -= 10; opit += 15;
		goto start;
		}
		
	if(vibr == 2){
		
		if(lvl < 3){system ("clear");cout << "Не хватает уровня развития\n";goto learn;}
		if(life < 20){cout << "Мало силы\n";}
		if(komp == false){cout << "Нет компьютера\n";goto learn;}
		system ("clear");cout << "Ты заработал 30 опыта и потерял 20 силы\n"; life -= 20; opit += 30;
		goto start;
		}
    
    if(vibr == 3){
		
		if(lvl < 5){system ("clear");cout << "Не хватает уровня развития\n";goto learn;}
		if(life < 50){cout << "Мало силы\n";}
		if(ucheb == false){cout << "Нет учебников\n";goto learn;}
		system ("clear");cout << "Ты заработал 80 опыта, потерял 50 силы и 70 рублей\n"; life -= 50; opit += 80; money -= 70;
		goto start;
		}
		else {cout << "Ты ввёл не то число, повтори ввод\n";system ("clear");goto learn;}
}
