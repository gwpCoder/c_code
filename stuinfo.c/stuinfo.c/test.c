#define _CRT_SECURE_NO_WARNINGS 1 

#include"stuinfo.h"

int main()
{
	STI *phead;
	//初始化
	stuInfoInit(&phead);      
	//将7个人的数据读入到链表
	printf("录入数据\n");
    stuInfoPushback(&phead);
	stuInfoPrint(phead);     
	//删除00004
	printf("删除后\n");
	stuInfoDelect(&phead,"00004");
	stuInfoPrint(phead);
	//排序
	stuInfoBubble(&phead);
	//排序后  
	printf("排序后\n");
	stuInfoPrint(phead);
	//写入score.txt中
	stuInfoScore(&phead);
	printf("写入score.txt成功\n");
	return 0;
}