#define _CRT_SECURE_NO_WARNINGS

//Ä£ÄâÊµÏÖstrcmp


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strcmp(const char* dest1, const char* dest2)
{
	int ret = 0;
	assert(*dest1 != NULL);
	assert(*dest2 != NULL);
	while (*dest1 == *dest2)
	{
		if (*dest1 == '\0')
		{
			return 1;
		}
		*dest2++;
		*dest1++;
	}
	return 0;
}
int main()
{
	char *a = "abcde";
	char *b = "abcde";
	int ret = my_strcmp(a, b);
	printf("%d\n", ret);
	system("pause");
	return 0;
}