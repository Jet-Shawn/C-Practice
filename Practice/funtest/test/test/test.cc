#define _CRT_SECURE_NO_WARNINGS

#include<iostream>  
#include<string>
#include<windows.h>

#define RED "\e[0;31m"
#define YELLOW "\e[1;33m"
#define WHITE "\e[1;37m"

using namespace std;

int main(){
	string str = "#";
	int i = 0;
	string str1 = "%";
	while (i < 100){
		i++;
		str.push_back('#');
		cout << str << 'RED' << ' ' << i << str1 << endl;
		Sleep(150);
		system("cls");
	}
	return 0;
}