#include<stdio.h>
void bubble_sort(int arr[],int sz)//�ص� 
{	int i=0;
for(i=0;i<sz-1;i++)//ȷ������ 
{
	int flag=1;//�����Ѿ����� 
	int j=0;
	for(j=0;j<sz-1-i;j++)//ÿ�ɱȽϴ��� 
	{
		if(arr[j]>arr[j+1])//���� ����С�������� 
		{
			int	temp=0;
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			flag=0;//���ɲ���ȫ���� 
		}
	}
	if(flag==1)
	break;//����ѭ�� �����˱Ƚϣ��Ż� 

}
}
int main(void)
{
	int arr[]={9,4,5,6,3,7,2,0,8,1};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);//ð�������� 
	for(i=0;i<sz;i++)
		printf("%5d",arr[i]);
	return 0;
}

