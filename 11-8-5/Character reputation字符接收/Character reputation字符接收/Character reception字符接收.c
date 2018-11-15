#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。



//我写的代码中没有fflush函数，循环部分第一次可以正常操作，第二次却直接输出了一个“无效的输入！”
//scanf其实在第一次循环开始输入之后，储存了‘s’和‘\n’
//前者是我从键盘上输入的，后者是我按下回车键所附带的，所以才会循环两边，第一次找的是输入的‘s’，第二次是找的'\n'即回车键
//用了fflush函数之后，在第二次循环开始前清空了缓冲区，让我能重新开始输入

//或者可以使用while(getchar())就只会获取‘s’，而不会去管‘\n’了。


int main()
{
	char s = 0;
	while (1)
	{
		printf("请输入一个键盘字符:\n");
		//fflush作用是清除缓冲区，stdin是标准输入，fflush(stdin)就可以重置缓冲区
		fflush(stdin);
		scanf("%c", &s);
		if (s <= 90 && s >= 65)
		{
			printf("%c\n", s + 32);
		}
		else if (s >= 97 && s <= 122)
		{
			printf("%c\n", s - 32);
		}
		else
		{
			printf("无效的输入！\n");
		}
	}
	system("pause");
	return 0;
}