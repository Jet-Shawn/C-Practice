#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("************************\n");
	printf("******  1.play  ********\n");
	printf("******  0.exit  ********\n");
	printf("************************\n");
}

void game()
{
	int a;
	int guess;
	//定义一个计数器可以查看一共猜了几次
	int sum = 0;
	a = rand() % 100 + 1;//获取1-100的随机数
	printf("现在有一个一百以内的数字，请猜出它：");
	while (1)
	{
		scanf("%d", &guess);
		if (a < guess)
		{
			printf("猜的太大了，游戏继续\n");
			sum++;
		}
		else if (a > guess)
		{
			printf("猜的太小了，游戏继续\n");
			sum++;
		}
		else
		{
			printf("恭喜你，猜对了！");
			printf(" 你只猜了%d次就猜到了答案！\n", sum);
			break;
		}
	}

}

int main()
{
	int input = 0;
	//随机值函数全局定义一次即可srand((unsigned int)   利用时间实现伪随机数time(NULL));
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏 exit....\n");
			break;
		default:
			printf("请正确输入数字\n");
			break;
		}
	} while (input);
	return 0;
}




