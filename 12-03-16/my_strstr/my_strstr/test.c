#define _CRT_SECURE_NO_WARNINGS

//ʵ��strstr�ַ������Һ���

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
			//�ҵ�����st
			return (char*)st;
		st++;
	}
	//û�ҵ�
	return NULL;
}

int main()
{
	char *a = "aaacbbba";
	char *ret = my_strstr(a, "cb");
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("δ�ҵ�\n");
	system("pause");
	return 0;
}