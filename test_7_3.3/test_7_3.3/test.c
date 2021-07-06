#define _CRT_SECURE_NO_WARNINGS 1 
#include"SList.h"

void test1()
{  
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushBack(&sl, 6);
	SeqListPrint(sl);
}

int main()
{
	test1();
	return 0;
}