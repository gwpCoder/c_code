#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>


//int main()
//{
//	int day = 6;
//	if (day > 5)
//	{
//		printf("��ĩ\n");
//		printf("͵͵ѧϰ\n");
//	}     
//	else
//		printf("������\n");
//	   
//	return 0;
//}


//int max1(int x, int y)
//{
//	if (x > y)
//		return x;
//	return y;
//}
//int max2(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int x = 3;
//	int y = 5;
//	max1(x, y);
//
//	return 0;
//}


//int main()
//{ 
//	//����1~7����������ӡ��Ӧ��������
//	int day = 0;
//	printf("��������Ҫ��ӡ����������0~7��>");
//	scanf("%d", &day);  
//	switch (day)      
//	{
//	case 1: printf("����һ\n");  
//	    break;
//	case 2: printf("���ڶ�\n");
//		break;
//	case 3: printf("������\n");
//		break;
//	case 4: printf("������\n");
//		break;
//	case 5: printf("������\n");
//		break;
//	case 6: printf("������\n");
//		break;
//	case 7: printf("������\n");
//		break;
//	default: printf("��������������1~7");
//		break;
//
//	}



//int main()
//{
//	int a = 1, b = 0;
//	switch (a)
//	{
//	case 0:  a++;           
//	case 1:  a++;             // a=2
//	case 3:  a++, b++;        // a=3,b=1
//	default : 
//		switch (b)          
//		{
//		case 1: a++;         // a=4
//		case 2: b++; a++;    // b=2,a=5
//		case 3: a++;         // a=6
//			break;
//		}
//	case 4:  b++;            // b=3
//		break;
//	}
//
//	return 0;
//}


//int main()
//{     //��������l=20000��Ϊ��̴�ţ
//	int l = 0;
//	while (l<20000)
//	{
//		printf("��������l=%d\n", l);
//		l++;    //��һ�д���
//	}
//
//	if (l >= 20000)
//	{
//		printf("��̴�ţ\n");
//	}
//
//	return 0;
// 
//}




int main()
{
	int l = 0;  //��������
	int d = 0;  //��̵ȼ�
	while (l < 2000)
	{
		if (l == 100)
		{
			d++;
		   //break;
			continue;
			
		}
		l++;
	}
	printf("��������%d  ��̵ȼ�%d", l, d);

	return 0;
}
