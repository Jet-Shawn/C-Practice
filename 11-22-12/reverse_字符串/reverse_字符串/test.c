#define _CRT_SECURE_NO_WARNINGS

//��һ���ַ����������Ϊ : "student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���


#include <stdio.h>
#include <stdlib.h>

//��һ����ʼλ�ã���һ��Ҫ�ĵĸ�������һ��Ŀ��λ��
void rev_chr(char a[14], char b[14], int aa, int bb,int c)
{
	int cha = aa + bb;
	int i = aa;
	for (i = aa; i < cha; i++)
	{
		b[c] = a[i];
		c++;
	}
}


int main()
{
	char a[14] = "student a am i";
	char b[14] = "01234567890123";
	int i = 0;
	rev_chr(a, b, 0, 7, 7);
	rev_chr(a, b, 7, 3, 4);
	rev_chr(a, b, 10, 2, 2);
	rev_chr(a, b, 12, 1, 1);
	rev_chr(a, b, 13, 1, 0);
	//int j = 7;
	//for (i = 0; i < 7; i++)
	//{
	//	b[j] = a[i];
	//	j++;
	//}
	//j = 4;
	//for (i = 7; i < 10; i++)
	//{
	//	b[j] = a[i];
	//	j++;
	//}
	//j = 2;
	//for (i = 10; i < 12; i++)
	//{
	//	b[j] = a[i];
	//	j++;
	//}
	//b[1] = a[12];
	//b[0] = a[13];
	for (i = 0; i < 14; i++)
	{
		printf("%c", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}