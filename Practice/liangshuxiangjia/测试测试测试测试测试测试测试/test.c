#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


 struct ListNode {
     int val;
     struct ListNode *next;
 };

#include <math.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	int a = 0;
	int b = 0;
	int sum = 0;
	int i = 0;
	struct ListNode* l3;
	//拿到i1的位数
	while (l1 != NULL)
	{
		i++;
		l1 = l1->next;
	}
	//把第一个链表的值a求出来
	while (l1 != NULL)
	{
		a += l1->val * pow(10, i);
		l1 = l1->next;
		i--;
	}
	i = 0;
	//拿到i2位数
	while (l2 != NULL)
	{
		i++;
		l2 = l2->next;
	}
	//求第二个表b的值
	while (l2 != NULL)
	{
		b += l2->val * pow(10, i);
		l2 = l2->next;
		i--;
	}
	//拿到两数之和sum
	sum = a + b;
	while (sum)
	{
		//拿a存sum的余数放入表3
		a = sum % 10;
		sum = sum / 10;
		l3->val = a;
		l3 = l3->next;
	}
	if (l3 != NULL){
		l3->next = NULL;
	}
	return l3;
}
int main()
{
	addTwoNumbers(l1,l3);
	system("pause");
	return 0;
}