/*
 * nice letters.cxx
 * 
 * Copyright 2018 Unknown <archlinux>
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
#include <string>
#include <cstring>
#include <unistd.h>
#define msleep(x) usleep(x *1000)
using namespace std;
int main(int argc, char **argv)
{
	char standart_word[1000];
	cout << "Введите то что преобразовать (на английском языке, и не капсом!\n";
	cin.getline(standart_word,1000);
	int count = strlen(standart_word);
	int save_count = count;
	//cout","<<","count;
	//cout","<<","standart_word;
	string a[]={"Ꭿ","ᗩ","₳","Ǻ","ǻ","α","Ắ","ẫ","Ẵ","ắ"};//10
	string b[]={"ℬ","Ᏸ","β","฿","ß","ᗷ","ᗽ","Ɓ","␢","Ᏸ","ᗹ","ᛔ"};//12
	string c[]={"☾","ℭ","ℂ","Ç","¢","ç","Č","ς","⊂","Ꮸ","₡","¢"};//12
	string d[]={"ᗫ","Ɗ","Ď","ď","Đ","đ","ð","∂","₫","ȡ","ᚦ","ᚧ"};//12
	string e[]={"ℰ","ℯ","६","℮","ξ","Ể","Ễ","є","έ","ε","Ҿ","ҿ"};//12
	string f[]={"ℱ","₣","ƒ","∮","Ḟ","ḟ","ჶ","ᶂ","φ","ᚨ","ᚩ","ᚪ","ᚫ"};//13
	string g[]={"Ꮹ","Ꮆ","ℊ","Ǥ","ǥ","Ĝ","ĝ","Ğ","ğ","Ġ","ġ","Ģ","ģ","פ","ᶃ","₲"};//16
	string h[]={"ℍ","ℋ","ℎ","ℌ","ℏ","ዙ","Ꮵ","Ĥ","Ħ","ħ","Ή","廾","Ћ","ђ","Ḩ","Һ","ḩ","♄","ਮ"};//19
	string i[]={"ℐ","ί","ι","Ï","Ί","Ĩ","ĩ"};//7
	string j[]={"ჟ","Ĵ","ĵ","ᶖ","ɉ","ℑ"};//6
	string k[]={"₭","Ꮶ","Ќ","k","ќ","ķ","Ķ","Ҝ","ҝ","ᶄ","Ҡ","ҡ"};//12
	string l[]={"ℓ","Ŀ","ŀ","Ĺ","ĺ","Ļ","ļ","λ","₤","Ł","ł","ľ","Ľ","Ḽ","ḽ","ȴ","Ꮭ"};//18
	string m[]={"ℳ","ʍ","ᶆ","Ḿ","ḿ","ᗰ","ᙢ","爪","₥","ጠ","ᛖ"};//11
	string n[]={"ℕ","η","ñ","ח","Ñ","ή","ŋ","Ŋ","Ń","ń","Ņ","ņ","Ň","ň","ŉ","ȵ","ℵ","₦","ห","ກ","⋒","Ӈ","ӈ"};//23
	string o[]={"ტ","σ","ǿ","Θ","Ó","ô","Ö","ö","Õ","õ","ờ","ớ","ọ","Ọ","ợ","Ợ","ø","Ø"};//18
	string p[]={"ℙ","℘","ρ","Ꭾ","Ꮅ","尸","Ҏ","ҏ","ᶈ","₱","☧","ᖘ","ק","₽","թ","Ƿ","Ҏ","ҏ"};//18
	string q[]={"ℚ","q","Q","ᶐ","Ǭ","ǭ","ჹ","૧"};//8
	string r[]={"ℝ","ℜ","ℛ","℟","ჩ","ᖇ","ř","Ř","ŗ","Ŗ","ŕ","Ŕ","ᶉ","Ꮢ","尺","ᚱ"};//16
	string s[]={"Ꮥ","Ṧ","ṧ","ȿ","§","Ś","ś","š","Š","ş","Ş","ŝ","Ŝ","₰","∫","$","ֆ","Տ","క"};//19
	string t[]={"₸","†","T","t","τ","Ţ","ţ","Ť","ť","ŧ","Ŧ","干","Ṫ","ṫ","ナ","Ꮏ","Ꮖ","テ","₮","⍡"};//20
	string u[]={"Ų","ű","Ű","ů","Ů","น","Ա","∪","ᙀ"};//9
	string v[]={"✔","∨","√","Ꮙ","Ṽ","ṽ","ᶌ","℣"};//9
	string w[]={"₩","ẃ","Ẃ","ẁ","Ẁ","ẅ","ώ","ω","ฬ","ᗯ","ᙡ","ฝ","พ"};//13
	string x[]={"χ","×","✗","✘","᙭","ჯ","Ẍ","ẍ","ᶍ","א"};//10
	string y[]={"ɣ","Ꭹ","Ꮍ","Ẏ","ẏ","ϒ","ɤ","￥","ע","௶","Ⴘ"};//11
	string z[]={"ℤ","乙","Ẑ","ẑ","ɀ","Ꮓ"};//6
	int thenum=0;
	int randnum;
	
	cout<<"Сколько различных слов вывести?\n";
	int howmany;
	cin >> howmany;
	cout<<"ждёмс..."<<endl;
	for(int kek = 0;kek<howmany;kek++)
	{
	while(count>0)
	{
		
		
		
		if(standart_word[thenum]=='a')
		{
			srand(time(NULL));
			randnum=0+rand()%9;
			cout<<a[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='b')
		{
			srand(time(NULL));
			randnum=0+rand()%11;
			cout<<b[randnum];
			thenum++;msleep(100);
		}
		 else if(standart_word[thenum]=='c')
		{
			srand(time(NULL));
			randnum=0+rand()%11;
			cout<<c[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='d')
		{
			srand(time(NULL));
			randnum=0+rand()%11;
			cout<<d[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='e')
		{
			srand(time(NULL));
			randnum=0+rand()%11;
			cout<<e[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='f')
		{
			srand(time(NULL));
			randnum=0+rand()%12;
			cout<<f[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='g')
		{
			srand(time(NULL));
			randnum=0+rand()%15;
			cout<<g[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='h')
		{
			srand(time(NULL));
			randnum=0+rand()%18;
			cout<<h[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='i')
		{
			srand(time(NULL));
			randnum=0+rand()%6;
			cout<<i[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='j')
		{
			srand(time(NULL));
			randnum=0+rand()%5;
			cout<<j[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='k')
		{
			srand(time(NULL));
			randnum=0+rand()%11;
			cout<<k[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='l')
		{
			srand(time(NULL));
			randnum=0+rand()%16;
			cout<<l[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='m')
		{
			srand(time(NULL));
			randnum=0+rand()%10;
			cout<<m[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='n')
		{
			srand(time(NULL));
			randnum=0+rand()%22;
			cout<<n[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='o')
		{
			srand(time(NULL));
			randnum=0+rand()%17;
			cout<<o[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='p')
		{
			srand(time(NULL));
			randnum=0+rand()%17;
			cout<<p[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='q')
		{
			srand(time(NULL));
			randnum=0+rand()%7;
			cout<<q[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='r')
		{
			srand(time(NULL));
			randnum=0+rand()%15;
			cout<<r[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='s')
		{
			srand(time(NULL));
			randnum=0+rand()%18;
			cout<<s[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='t')
		{
			srand(time(NULL));
			randnum=0+rand()%19;
			cout<<t[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='u')
		{
			srand(time(NULL));
			randnum=0+rand()%8;
			cout<<u[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='v')
		{
			srand(time(NULL));
			randnum=0+rand()%7;
			cout<<v[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='w')
		{
			srand(time(NULL));
			randnum=0+rand()%12;
			cout<<w[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='x')
		{
			srand(time(NULL));
			randnum=0+rand()%9;
			cout<<x[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='y')
		{
			srand(time(NULL));
			randnum=0+rand()%10;
			cout<<y[randnum];
			thenum++;msleep(100);
		}
		else if(standart_word[thenum]=='z')
		{
			srand(time(NULL));
			randnum=0+rand()%5;
			cout<<z[randnum];
			thenum++;msleep(100);
		}
		
		else
		{
			cout<<standart_word[thenum];
			thenum++;msleep(100);
		}
		
		
		count--;
		}
		count = save_count;
		thenum=0;
		cout << "\n\n";
	}
	return 0;
}

