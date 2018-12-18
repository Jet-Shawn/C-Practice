#define _CRT_SECURE_NO_WARNINGS


 //模拟实现strcpy

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


//dest是destnation目标缩写
char* my_strcpy(char* dest,char* b)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(b != NULL);
	//char* ret = dest;
	while (*b)
	{
		*dest = *b;
		*b++;
		*dest++;
	}
	return ret;
}

int main()
{
	char a[4] = { 0 };
	char b[4] = { 'a', 'b', 'c', '\0' };
	my_strcpy(a, b);
	printf("%s\n", a);
	system("pause");
	return 0;
}