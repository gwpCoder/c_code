#include"SeqList.h"

// ������ɾ��Ľӿ�

// ˳����ʼ��
void SeqListInit(SeqList* psl)
{
		psl->array = NULL;
		psl->size = 0;
		psl->capacity = 0;
}
// ˳�������
void SeqListDestory(SeqList* psl)
{
	free(psl->array);   //�ͷſռ䣬��ֹ�ڴ�й©
	psl->array = NULL;
}
// ˳����ӡ
void SeqListPrint(SeqList* psl)
{    
	int i = 0;
	 for(i=0;i<psl->size;i++)
	 { 
	  printf("%d ",psl->array[i]);
	 }
	 printf("\n");
}
// ���ռ䣬������ˣ���������
void SeqListCheckCapacity(SeqList* psl)
{
	// ���˾�Ҫ����
	if (psl->size == psl->capacity)
	{
		int newcapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(psl->array, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			psl->array = tmp;
			psl->capacity = newcapacity;
		}
	}
}

// ˳���β��
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	SeqListCheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
// ˳���ͷ��
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	SeqListCheckCapacity(psl);
	int i = 0;
	for (i = psl->size; i >0; i--)
	{
		 psl->array[i]=psl->array[i-1];
	}

	psl->array[i] = x;
	psl->size++;
}
//˳���βɾ
void SeqListPopBack(SeqList* psl)
{
	psl->size--;
}
// ˳���ͷɾ
void SeqListPopFront(SeqList* psl)
{

	int end = 0;
	while (end<psl->size)
	{
		psl->array[end] = psl->array[end+1];
		end++;
	}
	psl->size--;
}
// ˳������
int SeqListFind(SeqList* psl, SLDataType x)
{
	if (psl == NULL)
		return 0;
	int i = 0;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			printf("�ҵ��ˡ��±�Ϊ��%d\n", i);
			return i;
	    }
	}
	printf("�Ҳ���\n");
	return -1;
}
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	SeqListCheckCapacity(psl);
	if (psl->size > pos)
	{
		int i = 0;
		for (i = psl->size; i>pos; i--)
		{
			psl->array[i] = psl->array[i - 1];
		}
		psl->array[i] = x;
		psl->size++;
	
	}
	else
	{
		printf("��λ�ò�����\n");

	}
	
}
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* psl, size_t pos)
{
	if (psl == NULL)
		return 0;
	if (psl->size > pos)
	{
		int i = 0;
		for (i = pos; i < psl->size-1; i++)
		{
			psl->array[i] = psl->array[i + 1];
		}
		psl->size--;
	}
		

}
