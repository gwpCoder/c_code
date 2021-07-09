#include"SeqList.h"

// 基本增删查改接口

// 顺序表初始化
void SeqListInit(SeqList* psl)
{
		psl->array = NULL;
		psl->size = 0;
		psl->capacity = 0;
}
// 顺序表销毁
void SeqListDestory(SeqList* psl)
{
	free(psl->array);   //释放空间，防止内存泄漏
	psl->array = NULL;
}
// 顺序表打印
void SeqListPrint(SeqList* psl)
{    
	int i = 0;
	 for(i=0;i<psl->size;i++)
	 { 
	  printf("%d ",psl->array[i]);
	 }
	 printf("\n");
}
// 检查空间，如果满了，进行增容
void SeqListCheckCapacity(SeqList* psl)
{
	// 满了就要扩容
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

// 顺序表尾插
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	SeqListCheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
// 顺序表头插
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
//顺序表尾删
void SeqListPopBack(SeqList* psl)
{
	psl->size--;
}
// 顺序表头删
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
// 顺序表查找
int SeqListFind(SeqList* psl, SLDataType x)
{
	if (psl == NULL)
		return 0;
	int i = 0;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			printf("找到了、下标为：%d\n", i);
			return i;
	    }
	}
	printf("找不到\n");
	return -1;
}
// 顺序表在pos位置插入x
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
		printf("该位置不存在\n");

	}
	
}
// 顺序表删除pos位置的值
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
