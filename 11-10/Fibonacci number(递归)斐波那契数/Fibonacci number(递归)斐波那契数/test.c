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


int Fib(int n)
{
	int a = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		//�����Ż������Բ�ѯ��β�ݹ顱������
		return Fib(n - 2) + Fib(n - 1);
	}
}




int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}