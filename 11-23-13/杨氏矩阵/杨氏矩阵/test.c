#define _CRT_SECURE_NO_WARNINGS

////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int y[][3] = { 0 };
	printf("�������һ�е��������֣�\n");
	scanf("%d%d%d", &a, &b, &c);
	system("pause");
	return 0;
}