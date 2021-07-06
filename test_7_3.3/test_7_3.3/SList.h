#define _CRT_SECURE_NO_WARNINGS 1 
#pragma
#include<stdio.h>
#include<string.h>
#include<assert.h>
#define MAX_SIZE 10       //增强代码的可维护性！
typedef int datetype;    //  typedef 类型  ；

//静态顺序表

typedef struct SeqList
{
	datetype date[MAX_SIZE];//定长数组
	int size ;      //长度

}SL;
  
//初始化
void SeqListInit(SL* sl);

//打印
void SeqListPrint(SL sl);

//实现增删查改等接口
 
  //头插
void SeqListPushFront(SL* sl, datetype x);
 //尾插
void SeqListPushBack(SL* sl, datetype x);
//头删
void SeqListPopFront(SL* sl, datetype x);
//尾删
void SeqListPopBack(SL* sl, datetype x);
//增加
void SeqListAdd(SL* sl, datetype p, datetype x);
//查
int SeqListFind(SL* sl, datetype x);
//改
void SeqListModify(SL* sl, datetype x);



