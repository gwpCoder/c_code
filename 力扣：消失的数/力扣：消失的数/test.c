#include<stdio.h>
int missingNumber(int* nums, int numsSize)
{
	/*int i = 0;
	int*arr = (int*)malloc(sizeof(int)*(numsSize + 1));
	if (arr==NULL)
		return 0;
	for (i = 0; i<numsSize; i++)
	{
		arr[nums[i]] = nums[i];
		if (arr[nums[i]] != nums[i])
			return i;
	}
	return 0;*/
	//2��� ����a^a=0;a^(a^b)=b;����0,numsSize����nums[i]ȫ����� �ҳ���
	/*int i = 0,t=0;
	for (i = 0; i < numsSize; i++)
	{
		t ^= nums[i];
		t ^= i;
	}
	t^=numsSize;
	return t;*/
	//3��������0��numsize�ĺͼ�ȥ����ĺ�
	int sum1=0,sum2=0, i = 0;
	for (i = 0; i < numsSize; i++)
	{
		sum1 += i;
		sum2 += nums[i];
	}
	sum1 += numsSize;
	return sum1 - sum2;

}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7,9,0};
	int sz = 9;
	printf("%d",missingNumber(arr, sz));
	getchar();getchar();
	return 0;
}
