#define _CRT_SECURE_NO_WARNINGS

//实现strstr字符串查找函数

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


char* my_strstr(const char *str1, const char *str2)
{
	const char *s1 = str1;
	const char *s2 = str2;
	const char *st = s1;

	assert(str1 != NULL);
	assert(str2 != NULL);

	while (*st)
	{
		s1 = st;
		s2 = str2;
		while (*s1 == *s2 && *s1)
		{
			*s1++;
			*s2++;
		}
		if (*s2 == '\0')
			//找到返回st
			return (char*)st;
		st++;
	}
	//没找到
	return NULL;
}

int main()
{
	char *a = "aaacbbba";
	char *ret = my_strstr(a, "cb");
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("未找到\n");
	system("pause");
	return 0;
}