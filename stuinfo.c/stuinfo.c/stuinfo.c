#define _CRT_SECURE_NO_WARNINGS 1 
#include"stuinfo.h"
  
// ��ʼ������
void stuInfoInit(STI * *pstI)
{
	//�����ڱ�λ�ڵ�
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
// β�����ݶ��뵽������
void stuInfoPushback(STI** pstI)
{  
	STI* ret = *pstI;

	  FILE* pf = fopen("stuinfo.txt", "r");
	  int i = 0;
	  for (i = 0; i < 7; i++)
	  {
		  //�����ڵ�
		  STI* new = (STI*)malloc(sizeof(STI));
		  if (new == NULL)
		  {
			  //���ٿռ�ʧ��
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
//ɾ��
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
	while (pf->next != NULL) {//��pfָ��Ľڵ�Ϊ��׼�ڵ�
		pb = pf->next;//pb�ӻ�׼�����һ���ڵ㿪ʼ
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
//д��
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