#pragma once
#include<stdio.h>
#include<string.h>

//创建链表节点
typedef struct stuInfo
{
	char id[12];  	//数据成员   
	char name[15];
	float score;
	struct stuInfo* next;   //指针成员
	
}STI;       //类型重命名用STI代替 struct stuInfo


//初始化
void stuInfoInit(STI **pstI);
//尾插数据读入到链表中
void stuInfoPushback(STI** pstI);
//打印
void stuInfoPrint(STI *pstI);
//删除
void stuInfoDelect(STI** pstI,char*x);
//排序
void stuInfoBubble(STI**phead);
//写入
void stuInfoScore(STI** phead);