#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������


void reverse_string(char *string)
{
	if (*string != '\0')
	{
		reverse_string(string + 1);
		printf("%c", *string);
	}
}

int main()
{
	char string[] = "abcde";
	reverse_string(&string);
	printf("\n");
	system("pause");
	return 0;
}