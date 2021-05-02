#include<stdio.h>
void rotate(int* nums, int numsSize, int k)
{
	/*int i = 0, head = 0, tail = numsSize - 1, ret = 0;
	for (i = 0; i<k; i++)
	{
		ret = nums[head];
		nums[head] = nums[tail];
		nums[tail] = ret;
		head++;
		tail--;
	}*/
	int i = 0, head = 0, tail = numsSize - 1, ret = 0;
	for (i = 0; i<k; i++)
	{
		ret = nums[head];
		nums[head] = nums[tail];
		for (int j = 0; j<numsSize - 1; j++)
		{
			nums[tail] = nums[tail - 1];
			tail--;
		}
		nums[head + 1] = ret;
	}
	return 0;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int input = 0;
	scanf_s("%d", &input);
	rotate(arr, 10, input);
	for (int i = 0; i < 10;i++)
	printf("%3d", arr[i]);
	getchar(); getchar();
	return 0;
}