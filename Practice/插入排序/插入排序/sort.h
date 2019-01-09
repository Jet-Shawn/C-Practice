#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//打印数组
void PrintArray(int array[], int size){
	for (int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

//插入排序
void InsertSort(int array[], int size){
	for (int i = 1; i < size; i++){
		int j = 0;
		//交换后可能会覆盖这个数，所以先拿个临时变量存一下
		int tem = array[i];
		for (j = i - 1; j>=0;j--){
			//下标为i的数正在找插入位置
			if (tem >= array[j]){
				break;
			}
			//如果排序正常，则向后移位
			else{
				array[j + 1] = array[j];
			}
		}
			array[j + 1] = tem;
	}
}

void TestSort(){
	int array[] = {
		1, 3, 5, 7, 9, 2, 4, 6, 8, 0
	};
	int size = 10;
	PrintArray(array, size);
	InsertSort(array, size);
	PrintArray(array, size);
}