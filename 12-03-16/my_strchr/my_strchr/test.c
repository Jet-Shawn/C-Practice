#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>


char *my_strchr(const char *dest, const char sour)
{
	assert(*dest != NULL);

	//char *ret = *dest;
	while (*dest != NULL)
	{
		if (*dest == sour)
			return (char*)dest;
		*dest++;
	}
	return NULL;
}


int main()
{
	char *ret = my_strchr("abcde", 'c');
	printf("%s\n", ret);
	system("pause");
	return 0;
}