#define _CRT_SECURE_NO_WARNINGS

//Ä£ÄâÊµÏÖstrcat

#include <stdio.h>
#include <stdlib.h>

char* my_strcat(char* dest, char* sour)
{
	char* ret = dest;
	while (*dest)
	{
		*dest++;
	}
	while (*dest++ = *sour++)
	{
	}
	return ret;
}


int main()
{
	char a[20] ="Hello \0";
	char b[] = { 'w', 'o', 'r', 'l', 'd', '\0' };
	my_strcat(a, b);
	printf("%s", a);
	system("pause");
	return 0;
}