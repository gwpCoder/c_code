#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i = 0;
	int*p=(int*)malloc(4 * 10);//������̬�ڴ棻void* malloc��size_t������
	if (p != NULL)   //���ڴ治��������ʧ�ܣ�P=NULL��
	{
		for (i = 0; i < 10; i++)
		{
			*(p + i) = 0;
			printf("%d ", *(p + i));
		}
	}
	else
	{
		printf("%s",strerror(errno));//��ӡ����
	}
	free(p);//�ͷ��ڴ棬
	p = NULL;//�����Ҳ����õ�ַ
	int* q=(int*)calloc(10, sizeof(int));
	//�����ڴ沢��ʼ��Ϊ0��
	realloc(q,30);//�ı��ڴ��С��realloc(Ҫ���ĵ��ڴ��ַ,�ı����ֽڴ�С)
	return 0;
}
