#define _CRT_SECURE_NO_WARNINGS 1 

#include"stuinfo.h"

int main()
{
	STI *phead;
	//��ʼ��
	stuInfoInit(&phead);      
	//��7���˵����ݶ��뵽����
	printf("¼������\n");
    stuInfoPushback(&phead);
	stuInfoPrint(phead);     
	//ɾ��00004
	printf("ɾ����\n");
	stuInfoDelect(&phead,"00004");
	stuInfoPrint(phead);
	//����
	stuInfoBubble(&phead);
	//�����  
	printf("�����\n");
	stuInfoPrint(phead);
	//д��score.txt��
	stuInfoScore(&phead);
	printf("д��score.txt�ɹ�\n");
	return 0;
}