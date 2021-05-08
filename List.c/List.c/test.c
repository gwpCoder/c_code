#define _CRT_SECURE_NO_WARNINGS 1 
#include"List.h"
void test1()
{
	ListNode*phead = ListInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushFront(phead, 1);
	ListPushFront(phead, 2);
	ListPushFront(phead, 3);
	ListPopFront(phead);
	ListPopBack(phead);
	ListPrint(phead);
	getchar();
}
void test2()
{
	ListNode*phead = ListInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListNode*pos=ListFind(phead, 2);
	//ListErase(pos);
	ListInsert(pos, 0);
	ListPrint(phead);
	getchar();
}
int main()
{
	//test1();
	test2();
	return 0;
}