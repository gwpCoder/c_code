//#pragma once
//#include<stdio.h>
//typedef int  SLTDataType;
//typedef struct SListNode
//{
//	SLTDataType date;
//	struct SListNode* next;
//}SLTNode;
//// ����ı������ͷָ�룬��һ��ָ��
//void SListPrint(SLTNode* phead);
//
//// ���ܻ�ı������ͷָ�룬������ָ��
//void SListPushBack(SLTNode** pphead, SLTDataType x);
//void SListPushFront(SLTNode** pphead, SLTDataType x);
//void SListPopFront(SLTNode** pphead);
//void SListPopBack(SLTNode** pphead);
//
//SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//// ��pos��ǰ�����x
//void SListInsert(SLTNode** phead, SLTDataType x, SLTDataType y);
//void SListErase(SLTNode** phead, SLTNode* pos);



#pragma once  
#include<stdio.h>
//����    1.��ʼ��   2.��ӡ  3.��ɾ���   4.����
//����  ��������  ��ͷ��ѭ��
  
typedef struct SlistNode
{
    int date;
    struct SlistNode* next;
}SLTN;
 
//��ʼ��
 

// �ӿ�


    