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
	//�õ�i1��λ��
	while (l1 != NULL)
	{
		i++;
		l1 = l1->next;
	}
	//�ѵ�һ�������ֵa�����
	while (l1 != NULL)
	{
		a += l1->val * pow(10, i);
		l1 = l1->next;
		i--;
	}
	i = 0;
	//�õ�i2λ��
	while (l2 != NULL)
	{
		i++;
		l2 = l2->next;
	}
	//��ڶ�����b��ֵ
	while (l2 != NULL)
	{
		b += l2->val * pow(10, i);
		l2 = l2->next;
		i--;
	}
	//�õ�����֮��sum
	sum = a + b;
	while (sum)
	{
		//��a��sum�����������3
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