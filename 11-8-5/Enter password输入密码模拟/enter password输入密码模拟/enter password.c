#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。


int main()
{
	int pass = 123456;
	int n = 0;
	//定义一个计数器sum，如果sum=3，退出程序
	int sum = 0;
	while (1)
	{
		printf("请输入密码：");
		scanf("%d", &n);
		if (n == pass)
		{
			printf("密码正确，登陆成功。\n");
			break;
		}
		else if (n!=pass)
		{
			sum++;
			if (sum == 3)
			{
				printf("三次均输入错误，退出登陆。\n");
				break;
			}
			else
			{
				printf("密码错误，你还有%d次输入机会：\n", 3 - sum);
			}
		}

	}
	system("pause");
	return 0;
}