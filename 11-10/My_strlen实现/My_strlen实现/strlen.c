#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

int my_strlen(char *a)
{
	int sum = 0;
	while (1)
	{
		if (*a != '\0')
		{
			sum++;
			*a++;
		}
		else
			break;
	}
	return sum;
}


int main()
{
	char a[] = "abcde";
	printf("%d\n", my_strlen(&a));
	system("pause");
	return 0;
}