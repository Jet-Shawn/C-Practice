#define _CRT_SECURE_NO_WARNINGS

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a < 6; a++)
	{
		for (b = 1; b < 6; b++)
		{
			for (c = 1; c < 6; c++)
			{
				for (d = 1; d < 6; d++)
				{
					for (e = 1; e < 6; e++)
					{
						//b=2，a不等于3或者a=3，b不等于2.
						if ((b == 2 && a != 3) || (a == 3 && b != 2))
						{
							if ((b == 2 && e != 4) || (e == 4 && b != 2))
							{
								if ((c == 1 && d != 2) || (d == 2 && c != 1))
								{
									if ((c == 5 && d != 3) || (d == 3 && c != 5))
									{
										if ((e == 4 && a != 1) || (a == 1 && e != 4))
										{
											//来到这里的数字组合还要检查是否有相同的数据，所以拿五个数相乘的结果肯定要等于120
											if (a*b*c*d*e == 120)
											{
												printf("%d%d%d%d%d\n", a, b, c, d, e);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}