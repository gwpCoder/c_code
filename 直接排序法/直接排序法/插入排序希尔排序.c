#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//ԭ�����Ʋ���
//���ӽṹ�򵥻� �ֳɺܶ���򵥲��� 
//����ǰend������end+1����[0,end]��
//void chapai(int *arr, int x)
//{   //ʱ�临�Ӷ�O(n^n);
//	int i = 0, end = 0, tmp = 0;
//	for (i = 0; i<x - 1; i++)//���ƿ�����������i<x+1 ���end=i=x-1-1; 
//		//arr[end+1]�������һ��Ԫ��
//	{
//		end = i;
//		tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)//����
//			{
//				arr[end + 1] = arr[end];//���Ʊ��ڲ���
//				end--;
//			}
//			else
//			{
//				break;
//				//�ҵ���λ��
//			}
//		}
//		arr[end + 1] = tmp;//1,��;�ҵ���
//		                   //2,û�ҵ������Ʋ��뵽��ǰ
//	}
//	return;
//}

//ϣ������
// ��һ�����ֳɶ��飬 ��Ԥ���򡪡�>��������-��>����
//ʱ�临�Ӷ�O(n*logn);
void xier(int *arr, int x)
{  
	// 1,2,3,4,5,6,7,8,9,10;
	//��glapwΪ��� Ϊһ�� 
	//eg: glap=3;
	// 1,4,7,10;2,5,8;3,6,9;�ֱ����
	int glap = x;
	while (glap > 1)//��glap>1 Ԥ���� ע�� ��glap=2ʱ �����glap=1 ��������
	{
		glap = glap/ 2;//�ص�
		//glapԽСԽ�ӽ�����
		for (int i = 0; i < x - glap; i++) //����ͬʱ���� �������� end+glap=x-1;����i=end=x-1;
		{
			int end = i;	
			int tmp = arr[end + glap];
			while (end>=0)
			{
				if (arr[end] > tmp)
				{
					arr[end + glap] = arr[end];
					end-=glap;
				}
				else
				{
					break;
				}
			}
			arr[end + glap] = tmp;
		}

	}
	
}
void PrintArr(int *arr, int x)
{
	for (int i = 0; i < x; i++)
	printf("%d ", arr[i]);
	printf("\n");
}
void test1()
{
	int arr[] = { 2, 5, 6, 3, 4, 7, 8, 1, 9, 0 };
	int sz = sizeof(arr) / sizeof(int);
	//chapai(arr, sz);
	xier(arr, sz);
	PrintArr(arr, sz);
}
int main(void)
{
	test1();
	getchar();
	return 0;
}