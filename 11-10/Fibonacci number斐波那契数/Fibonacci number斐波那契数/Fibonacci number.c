#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//쳲������������֮Ϊ쳲��������У������� Successione di Fibonacci)��
//�ֳƻƽ�ָ����С��Ѳ��������С��Ѳ����������������У�
//ָ��������һ�����У�1��1��2��3��5��8��13��21������
//����ѧ�ϣ�쳲��������������±��Եݹ�ķ������壺
//F0 = 0��F1 = 1��Fn = Fn - 1 + Fn - 2��n >= 2��n��N*����
//��������˵������쳲����������� 0 �� 1 ��ʼ��
//֮���쳲���������ϵ������֮ǰ��������ӡ�



//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

int main()
{
	int input = 0;
	int q = 0;
	int s = 1;
	int tem = 0;
	int i = 0;
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		tem = s + q;
		q = s;
		s = tem;
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}