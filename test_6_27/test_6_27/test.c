#define _CRT_SECURE_NO_WARNINGS 1 


//#include<stdio.h>
//void test(int(* p)[5],int x,int y)
//{
//	int i = 0,j=0;
//	for(i=0;i<x;i++)
//	{ 
//		for(j=0;j<5;j++)
//		{
//		   printf("%d ",  p[i][j]);  
//		   printf("%d ", *(*(p+i)+j)); 
//		}
//	printf("\n");
//	}
//}
//int  main()
//{
//	int arr[2][5] = { 0,1,2,3,4,5,6,7,8,9 };
//	test(arr,2,5);
//	return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//fbi(int input, int (*fb[])(int, int))
//{
//	int x, y;
//	printf("����������������> ");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", fb[input](x, y));
//}
//
//int main()
//{
//	 //����ָ���ʹ�ã�ת�Ʊ�
//	// �����    �Ӽ��˳�   add   sub  mul   div  
//	int (*fb[5])(int, int) = { 0,add,sub,mul,div};//����ָ������
//	int input = 0;
//	do
//	{ 
//		printf("*******************\n");
//		printf("***1.add   2.sub***\n");
//		printf("***3.mul   4.div***\n");
//		printf("******4.exit*******\n");
//		printf("��ѡ��>");
//
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4: fbi(input, fb);
//			break;
//		case 0: printf("�˳�/n");
//			break;
//		default:printf("���������������\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}
//
//




//int main()
//{
//	FILE* PFile;
//	PFile = fopen("text.666", "w");
//
//	PFile = fclose("text.666");
//
//	return 0;
//}
//struct ex
//{
//	char name[10];
//	double score[3];
//};
//void mean(struct ex* stu)
//{   
//	int i = 0,j=0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{  
//		double sum = 0.0;
//		for (j = 0; j < 3; j++)  //��һ���˼�ƽ��ֵ
//		{
//			sum=sum+stu[i].score[j];
//		}
//		printf("name:%s ave:%lf\n",stu[i].name, sum / 5);
//	}
//}
//
//int main()
//{
//	struct ex stu[5] ;
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("������name:");
//		scanf("%s", &stu[i].name);
//		int j = 0;
//		printf("������3�Ƴɼ���");
//		for(j=0;j<3;j++)
//		scanf("%lf", &stu[i].score[j]);    
//	}
//	 //��3�Ƴɼ�ƽ��ֵ
//	   mean(stu);
//	   
//	return 0;
//}


//struct ex
//{
//	char name[10];
//	double score[3];
//};
//void mean(struct ex* stu)
//{
//	int i = 0, j = 0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		double sum = 0.0;
//		for (j = 0; j < 3; j++)  //��һ���˼�ƽ��ֵ
//		{
//			sum = sum + stu[i].score[j];
//		}
//		printf("name:%s ave:%lf\n", stu[i].name, sum / 5);
//	}
//}
//
//int main()
//{
//	struct ex stu[5];
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("������name:");
//		scanf("%s", &stu[i].name);
//		int j = 0;
//		printf("������3�Ƴɼ���");
//		for (j = 0; j < 3; j++)
//			scanf("%lf", &stu[i].score[j]);
//	}
//	//��3�Ƴɼ�ƽ��ֵ
//	mean(stu);
//
//	return 0;
//}
//
//
//
//#include<stdio.h>
//void myfun(int num, double m, double n, double q);
//struct ex2 {
//	int num;
//	double s[3];
//};
//int main(void)
//{
//	struct ex2 stu[2];
//	int i = 0, j = 0;
//	printf("Input number and score:\n");
//	for (int i = 0; i < 2; i++)
//	{
//		scanf("%d", &stu[i].num);
//		for (int j= 0; j < 3; j++)
//		{
//			scanf("%lf", &stu[i].s[j]);
//		}
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		myfun(stu[i].num, stu[i].s[0], stu[i].s[1], stu[i].s[2]);
//	}
//
//}
//void myfun(int num, double m, double n, double q)
//{
//	double ave=0;
//	ave = (m + n + q) / 3;
//	printf("%d��ƽ���ɼ�Ϊ%lf", num, ave);
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch[] = "123456";
//	char* pc = &ch;
//	*(pc++) = 0;
//	printf("%s", pc);
//	return 0;
//}



//int main()
//{
//
//	return 0;
//}