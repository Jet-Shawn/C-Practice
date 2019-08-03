#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(){
	//cout << strlen("c:\test\32\test.c") << endl;
	//char a[3] = "ab";
	//cout << strlen(a) << endl;
	int num = 10;
	int *p = &num;
	cout << p << endl;
	cout << &num << endl;
	*p += 10;
	cout << num << endl;
	system("pause");
	return 0;
}