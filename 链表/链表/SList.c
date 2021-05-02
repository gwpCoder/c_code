#include"SList.h"
void SListPrint(SLTNode* phead)
{
	     while (phead)
		{
			printf("%d->", phead->date);
			phead = phead->next;
		}
		printf("NULL");
	
}
SLTNode* BuySListNode(SLTDataType x)//�����½ڵ㲢��ֵ
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->date = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushBack(SLTNode** pphead, SLTDataType x)//β��
{
	
	SLTNode *newnode = BuySListNode(x);
	if (*pphead)
	{
		SLTNode*tail =*pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next= newnode;
	}
	else
	{
		*pphead=newnode;
	}

}
void SListPushFront(SLTNode** pphead, SLTDataType x)//ͷ��
{
	SLTNode*newnode = BuySListNode(x);
	SLTNode*ret = NULL;
	ret = *pphead;
	newnode->next = ret;
	*pphead = newnode;
}
void SListPopFront(SLTNode** pphead)
{
	if (!*pphead)
	{
		return;
	}
	else
	{
		SLTNode*head = (*pphead)->next;
		*pphead = head;
	}
}

void SListPopBack(SLTNode** pphead)
{
	// 1����
	// 2��һ���ڵ�
	// 3��һ�����ϵĽڵ�
	if (!*pphead)
	{
		return;
	}
	else if (!(*pphead)->next)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
	SLTNode*tail = *pphead;
	SLTNode*cur = *pphead;
	while (tail->next!=NULL)
	{
		cur = tail;
		tail = tail->next;
	}
	cur->next = NULL;
	free(tail);
	}
	
	
}
SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode*head = phead;
	SLTNode*ret = phead;
	if (!head)
		return NULL;
	while (head->date!= x)
	{
		ret = head;
		head = head->next;
		if (head == NULL)
			return NULL;
	}
	
	return ret;
}
//posǰ��
void SListInsert(SLTNode** phead, SLTDataType x, SLTDataType y)
{
	SLTNode* pos = SListFind(*phead, x);
	if (pos==*phead)
		SListPushFront(phead, y);
	else if (!pos||!*phead)
	{
		printf("��λ�ò�����\n");
		return;
	}
	else
	{
		SLTNode* newnade = BuySListNode(y);
		newnade->next = pos->next;
		pos->next = newnade;
	}
}
