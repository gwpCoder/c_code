#define _CRT_SECURE_NO_WARNINGS 1 
#pragma
#include<stdio.h>
#include<string.h>
#include<assert.h>
#define MAX_SIZE 10       //��ǿ����Ŀ�ά���ԣ�
typedef int datetype;    //  typedef ����  ��

//��̬˳���

typedef struct SeqList
{
	datetype date[MAX_SIZE];//��������
	int size ;      //����

}SL;
  
//��ʼ��
void SeqListInit(SL* sl);

//��ӡ
void SeqListPrint(SL sl);

//ʵ����ɾ��ĵȽӿ�
 
  //ͷ��
void SeqListPushFront(SL* sl, datetype x);
 //β��
void SeqListPushBack(SL* sl, datetype x);
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



