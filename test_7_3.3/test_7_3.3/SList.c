#define _CRT_SECURE_NO_WARNINGS 1 
#include"SList.h"

//��ʼ��
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
//ͷ��
void SeqListPushFront(SL* sl, datetype x)
{
	

}
//β��
void SeqListPushBack(SL* sl, datetype x)
{
	assert(sl);
	sl->date[sl->size] = x;
	sl->size++;
}
//ͷɾ
void SeqListPopFront(SL* sl, datetype x);
//βɾ
void SeqListPopBack(SL* sl, datetype x);
//����
void SeqListAdd(SL* sl, datetype p, datetype x);
//��
int SeqListFind(SL* sl, datetype x);
//��
void SeqListModify(SL* sl, datetype x);

