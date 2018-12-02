#define _CRT_SECURE_NO_WARNINGS


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。




#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	//遍历abcd从0到1所有情况
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			for (c = 0; c < 2; c++)
			{
				for (d = 0; d < 2; d++)
				{
					//把0看做无罪，1看做有罪，a+b+c+d==1可以排除有多个罪人的情况，再依次列出四种假话情况，就可以求出凶手
					if (a + b + c + d == 1 && ((a == 1 && c == 1 && d == 1 && d != 1) || (a != 1 && c != 1 && d == 1 && d != 1) || (a != 1 && c == 1 && d != 1) || (a != 1 && c == 1 && d == 1 && d == 1)))
					{
						printf("%d%d%d%d\n", a, b, c, d);
						//goto语句跳出循环保留abcd的值做判断
						goto flag;
					}
				}
			}
		}
	}
	flag:if (a)
	{
		printf("a为凶手\n");
	}
	if (b)
	{
		printf("b为凶手\n");
	}
	if (c)
	{
		printf("c为凶手\n");
	}
	if (d)
	{
		printf("a为凶手\n");
	}
	system("pause");
	return 0;
}