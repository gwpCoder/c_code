#include"SeqList.h"


int main()
{
	SeqList psl;
   //// 顺序表初始化
   SeqListInit(&psl);
   SeqListPushBack(&psl, 1);
   SeqListPushBack(&psl, 2);
   SeqListPushBack(&psl, 3);
   SeqListPushBack(&psl, 4);
   SeqListPushBack(&psl, 5);
   SeqListPushBack(&psl, 6);
   // 顺序表打印
   SeqListPrint(&psl);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, -1);
   //SeqListPushFront(&psl, -2);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, 0);
   //SeqListPushFront(&psl, 0);
   //// 顺序表打印
   //SeqListPrint(&psl);

   //SeqListPopFront(&psl);
   //SeqListPopFront(&psl);
   //
   //// 顺序表打印
   //SeqListPrint(&psl);

   //SeqListPopBack(&psl);
   //SeqListPopBack(&psl);
   //SeqListPopBack(&psl);
   /*SeqListPopBack(&psl);
   SeqListPopBack(&psl);
    顺序表打印
   SeqListPrint(&psl);*/
   //SeqListFind(&psl, 1);
  /* SeqListErase(&psl, 2);
    顺序表打印
   SeqListPrint(&psl);*/

   SeqListInsert(&psl, 1, 6);
   // 顺序表打印
   SeqListPrint(&psl);

   //// 顺序表销毁
   //SeqListDestory(&psl);
	return 0;
}