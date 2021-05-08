#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode*prev;
	struct ListNode*next;
	LTDataType date;
}ListNode;
ListNode* ListInit();
void ListDestory(ListNode* phead);
void ListPrint(ListNode* phead);
void ListPushBack(ListNode* phead, LTDataType x);
void ListPushFront(ListNode* phead, LTDataType x);
void ListPopFront(ListNode* phead);
void ListPopBack(ListNode* phead);
ListNode* ListFind(ListNode* phead, LTDataType x);
// pos位置之前插入x
void ListInsert(ListNode* pos, LTDataType x);
// 删除pos位置的值
void ListErase(ListNode* pos);


