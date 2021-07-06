#define _CRT_SECURE_NO_WARNINGS 1 
#include"stuinfo.h"
  
// 初始化函数
void stuInfoInit(STI * *pstI)
{
	//创建哨兵位节点
	STI* head = (STI*)malloc(sizeof(STI));
	strcpy(head->id, "\0");
	strcpy(head->name, "\0");
	head->score = 0.0;
	head->next = NULL;
	*pstI = head;
}
void stuInfoPrint(STI *pstI)
{ 
	pstI = pstI->next;
	while (pstI!=NULL)
	{   
		printf("%s %s %.2f\n", pstI->id, pstI->name, pstI->score);
		pstI = pstI->next;
	}
}
// 尾插数据读入到链表中
void stuInfoPushback(STI** pstI)
{  
	STI* ret = *pstI;

	  FILE* pf = fopen("stuinfo.txt", "r");
	  int i = 0;
	  for (i = 0; i < 7; i++)
	  {
		  //创建节点
		  STI* new = (STI*)malloc(sizeof(STI));
		  if (new == NULL)
		  {
			  //开辟空间失败
			  printf("malloc fail\n");
			  return;
		  }

		  fscanf(pf, "%s%s%f", new->id, new->name, &new->score);
		  new->next = NULL;
		  ret->next = new;
		  ret = ret->next;

	  }
	  fclose(pf);
	  pf = NULL;
}
//删除
void stuInfoDelect(STI** pstI,char*x)
{ 
	STI* first = *pstI;
	STI* ret = *pstI;
	STI* end = (*pstI)->next;
	while (strcmp(ret->id, x))
	{
		first = ret;
		ret = ret->next;
		end = ret->next;
		
	}
	first ->next= end;

} 
void stuInfoBubble(STI** phead)
{
	STI* pb, * pf, temp;
	  pf = *phead;
	while (pf->next != NULL) {//以pf指向的节点为基准节点
		pb = pf->next;//pb从基准点的下一个节点开始
		while (pb != NULL) {
			if (pf->score> pb->score) 
			{
				temp = *pf;
				*pf = *pb;
				*pb = temp;
				temp.next = pf->next;
				pf->next = pb->next;
				pb->next = temp.next;
			}
			pb = pb->next;
		}
		pf = pf->next;
	}
	return;
	
}
//写入
void stuInfoScore(STI** phead)
{
	FILE* pf = fopen("score.txt", "w");
	STI *ret = (*phead)->next;
	while (ret)
	{
		fprintf(pf, "%s%s%f\n", ret->id, ret->name, ret->score);
		ret = ret->next;
	}
	fclose(pf);
	pf = NULL;
}