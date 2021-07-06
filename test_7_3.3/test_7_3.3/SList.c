#define _CRT_SECURE_NO_WARNINGS 1 
#include"SList.h"

//初始化
void SeqListInit(SL* sl)
{
	memset(sl->date,0, MAX_SIZE * sizeof(datetype));
	sl->size = 0;
}

void SeqListPrint(SL sl)
{
	int i = 0;
	for (i = 0; i < sl.size; i++)
	{
		printf("%d  ", sl.date[i]);
	}
}
//头插
void SeqListPushFront(SL* sl, datetype x)
{
	

}
//尾插
void SeqListPushBack(SL* sl, datetype x)
{
	assert(sl);
	sl->date[sl->size] = x;
	sl->size++;
}
//头删
void SeqListPopFront(SL* sl, datetype x);
//尾删
void SeqListPopBack(SL* sl, datetype x);
//增加
void SeqListAdd(SL* sl, datetype p, datetype x);
//查
int SeqListFind(SL* sl, datetype x);
//改
void SeqListModify(SL* sl, datetype x);

