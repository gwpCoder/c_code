#pragma once
#include<stdio.h>
#include<string.h>

//��������ڵ�
typedef struct stuInfo
{
	char id[12];  	//���ݳ�Ա   
	char name[15];
	float score;
	struct stuInfo* next;   //ָ���Ա
	
}STI;       //������������STI���� struct stuInfo


//��ʼ��
void stuInfoInit(STI **pstI);
//β�����ݶ��뵽������
void stuInfoPushback(STI** pstI);
//��ӡ
void stuInfoPrint(STI *pstI);
//ɾ��
void stuInfoDelect(STI** pstI,char*x);
//����
void stuInfoBubble(STI**phead);
//д��
void stuInfoScore(STI** phead);