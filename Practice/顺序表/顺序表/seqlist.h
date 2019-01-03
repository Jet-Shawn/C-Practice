#define _CRT_SECURE_NO_WARNINGS

typedef int	SDataType;


typedef struct SeqList {
	SDataType	*array;		// 指向堆上的空间
	int size;		// 表示当前顺序表里有多少个数
	// 顺便也表示了即将插入的下标
	int	capacity;	// 容量
}	SeqList;

//初始化
void IniSeqlist(SeqList *seqlist, int capacity);
//头删
void SeqListPopFront(SeqList *seqlist);
//尾删
void SeqListPopBack(SeqList *seqlist);