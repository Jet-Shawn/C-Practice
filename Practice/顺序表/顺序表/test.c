#define _CRT_SECURE_NO_WARNINGS

#include "seqlist.h"



//顺序表的初始化
void IniSeqlist(SeqList *seqlist, int capacity){
	assert(seqlist != NULL);

	seqlist->array = (SDataType *)malloc(sizeof(SDataType)* capacity);
	assert(seqlist->array);

	seqlist->size = 0;
	seqlist->capacity = capacity;
}

//顺序表打印
void ShowSeqlist(struct Seqlist *seqlist, int size){
	while (size--){
		printf("%d->");
	}
	printf("\n");
}


int main(){
	return 0;
}
