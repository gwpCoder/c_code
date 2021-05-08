#define _CRT_SECURE_NO_WARNINGS 1 
#include"List.h"
ListNode*BuyNewNode(LTDataType x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->date = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}
ListNode* ListInit()
{
	
	ListNode*phead = BuyNewNode(0);
	phead->date = 0;
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode*newNode = BuyNewNode(x);
	ListNode*tail = phead->prev;
	phead->prev = newNode;
	newNode->prev= tail;
	newNode->next = phead;
	tail->next = newNode;

}
void ListPrint(ListNode* phead)
{   
	ListNode*cur = phead->next;
	while (cur!= phead)
	{
		printf("% d ", cur->date);
		cur = cur->next;
	}
}
void ListPushFront(ListNode* phead, LTDataType x)
{
	    assert(phead);
		ListNode*newNade = BuyNewNode(x);
		ListNode*first = phead->next;
		first->prev = newNade;
		newNade->next = first;
		phead->next = newNade;
	return 0;
}
void ListPopFront(ListNode* phead)
{
	assert(phead);
	if (phead->next != phead)
	{
		ListNode*first = phead->next;
		ListNode*scand = first->next;
		phead->next = scand;
		scand->prev = phead;
		free(first);
		first = NULL;
	}
	return 0;
}
void ListPopBack(ListNode* phead)
{
	if (phead->prev!= phead)
	{
		ListNode*tail = phead->prev;
		ListNode*ttail = tail ->prev;
		phead->prev = ttail;
		ttail->next = phead;
		free(tail);
		tail = NULL;
	}
}
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		if (cur->date == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
// pos位置之前插入x
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode*newNode = BuyNewNode(x);
	ListNode*ppos = pos->prev;
	ppos->next = newNode;
	newNode->prev = ppos;
	pos->prev = newNode;
	newNode->next = pos;

}
// 删除pos位置的值
void ListErase(ListNode* pos)
{
	ListNode*ppos = pos->prev;
	ListNode*lpos = pos->next;
	ppos->next = lpos;
	lpos->prev = ppos;
	free(pos);
	pos = NULL;
}

