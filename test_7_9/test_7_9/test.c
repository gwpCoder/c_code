#include"SeqList.h"


int main()
{
	SeqList psl;
   //// ˳����ʼ��
   SeqListInit(&psl);
   SeqListPushBack(&psl, 1);
   SeqListPushBack(&psl, 2);
   SeqListPushBack(&psl, 3);
   SeqListPushBack(&psl, 4);
   SeqListPushBack(&psl, 5);
   SeqListPushBack(&psl, 6);
   // ˳����ӡ
   SeqListPrint(&psl);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, -1);
   //SeqListPushFront(&psl, -2);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, 0);
   //// ˳����ӡ
   //SeqListPrint(&psl);

   //SeqListPopFront(&psl);
   //SeqListPopFront(&psl);
   //
   //// ˳����ӡ
   //SeqListPrint(&psl);

   //SeqListPopBack(&psl);
   //SeqListPopBack(&psl);
   //SeqListPopBack(&psl);
   /*SeqListPopBack(&psl);
   SeqListPopBack(&psl);
    ˳����ӡ
   SeqListPrint(&psl);*/
   //SeqListFind(&psl, 1);
  /* SeqListErase(&psl, 2);
    ˳����ӡ
   SeqListPrint(&psl);*/

   SeqListInsert(&psl, 1, 6);
   // ˳����ӡ
   SeqListPrint(&psl);

   //// ˳�������
   //SeqListDestory(&psl);
	return 0;
}