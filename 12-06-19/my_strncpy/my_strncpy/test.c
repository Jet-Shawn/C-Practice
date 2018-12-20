#define _CRT_SECURE_NO_WARNINGS

//实现strncpy长度受限制的字符串拷贝函数

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


char* my_strncpy(char* dest, const char* sour, int size)
{
	assert(*dest != NULL);
	assert(*sour != NULL);
	char* ret = dest;
	int i = 0;
	while (*dest = *sour)
	{
		*dest++;
		*sour++;
		size--;
		if (size == 0)
			return ret;
	}
	while (size--)
	{
		*dest++ = '\0';
	}
	return ret;
}

//C语言标准库源码

//char * __cdecl strncpy(char * dest,constchar * source,size_t count)
//{
//	char *start = dest;
//
//	while (count && (*dest++ = *source++))   /* copy string */
//		count--;
//
//	if (count)                             /* pad out with zeroes */
//	while (--count)
//		*dest++ = '\0';
//
//	return(start);
//}


int main()
{
	char a[10] = "aaaaaaaaa";
	my_strncpy(a, "xxxx", 4);
	printf("%s\n", a);
	system("pause");
	return 0;
}