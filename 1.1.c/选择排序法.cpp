#include<stdio.h>  //�ص㣻�̶�һ�����������������Ƚϣ������Ų��佻����3 6 1 7 8 3 
int main(void)														//	��һ�����ͺ�������Ƚ�Ȼ�󽻻�ֱ����һ������С			
{	int flag=0; //�Ż�ͬð�� 
	int i=0,j=0,temp=0,arr[]={5,6,7,8,8,9,1,5,8,9,2};			//ð�ݣ��ӵ�һ�������һ�����Ƚ�Ȼ�󽻻��ڶ��ȵ���������ȥֱ�����һ������� 
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz-1;i++) //ȷ���Ƚϴ��� 
	{ 	
		for(j=i+1;j<sz;j++) //ÿ�αȽϵıȽϸ��� 
	{
		if(arr[i]>arr[j])//��С������ 
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		flag=1; 
	}
	}
	if(flag==0)
	break;
	}
	for(i=0;i<sz;i++)
	printf("%4d",arr[i]);
	return 0;
 } 
