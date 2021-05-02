#include"SList.h"
int main(void)
{

	SLTNode*plist = NULL;
	SListPopFront(&plist);
	SListPushFront(&plist,0);
	SListInsert(&plist, 0, 4);
	SListPushBack(&plist,1);
	SListPushBack(&plist, 2);
	SListPopBack(&plist);
	SListPushBack(&plist, 3);
	SListPushFront(&plist,5);
    SListInsert(&plist,3,4);
	//SListInsert(&plist,5, 1);
	SListPrint(plist);
	getchar();
	return 0;
}