#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	int i = 0, j = 0;
//	for (i =0; i<m; i++)
//	{
//		
//	}
//	for (j = 0; j < n; j++)
//	{
//		nums1[i] = nums2[j];
//		i++;
//	}
//
//	for (i = 0; i<m + n; i++)
//		printf("%d", nums1[i]);
//		
//}
//int main(void)
//{
//	int arr1[7] = { 1, 2, 3, 4,0,0,0}, arr2[3] = { 5, 6, 7 };
//	merge(arr1, 7, 4, arr2, 3, 3);
//	getchar();
//}

//
struct ListNode
{
	int date;
	struct ListNode*next;
};
struct ListNode* reverseList(struct ListNode* head){
	
	if (head == NULL||head->next)
		return head;

	struct ListNode *p = head, *q = head->next, *r = q->next;
	p->next = NULL;
	while (q)
	{
		q->next = p;
		p = q;
		q = r;
		if (r)
			r = r->next;
	}
	return p;
}

int main(void)
{
	struct ListNode*head = NULL;
	reverseList(head);
}