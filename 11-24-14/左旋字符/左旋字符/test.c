#define _CRT_SECURE_NO_WARNINGS

//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include <stdio.h>
#include <stdlib.h>


void right_arr(char a[4], int k)
{
	int i = k;
	int c = 3;
	int d = 0;
	char b[4] = { 0 };
	for (; i > 0; i--)
	{
		//�Ӻ���ǰ�ţ������ȷ�b[3],c--,�´ξ��ܷ�b[2]
		b[c] = a[i - 1];
		c--;
	}
	for (; c >= 0; c--)
	{
		//û�����C�ĸ����Ϳ�ʼ���м���ǰ�ŵ���һ��
		b[c] = a[3-d];
		d++;
	}
	for (i = 0; i < 4; i++)
	{
		printf("%c", b[i]);
	}
}


int main()
{
	char arr[4] = "ABCD";
	int k = 0;
	printf("������Ҫ������ת���ַ�������");
	scanf("%d", &k);
	right_arr(arr, k);
	system("pause");
	return 0;
}