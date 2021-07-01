#define _CRT_SECURE_NO_WARNINGS 1 
//// ��������I/O�⣬����ʹ����һ�����������ʽ
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//// ����printMonth����Ҫ��ĸ�ʽ��ӡĳ��ĳ�µ�����
//// ������year-�꣬month-��
//// ����ֵ����
//void printMonth(int year, int month);
//
//// leapYear���ж�����
//// ������y-��
//// ����ֵ��1-�����꣬0-��������
//int leapYear(int y)
//{
//    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//        return 1;
//    return 0;
//}
//
//// ����whatDay:����ĳ��ĳ�µ�1�������ڼ�
//// ������year-�꣬month-��
//// ����ֵ��1��7--����1��������
//int whatDay(int year, int month)
//{
//    // 1������������һ
//    int w = 1;
//    int i;
//
//    // 1��year-1����ȫ��
//    for (i = 1; i < year; i++)
//    {
//        if (leapYear(i))
//            w += 366;
//        else
//            w += 365;
//    }
//    switch (month)
//    {
//    case 12: // ���µ�                                                                   
//        w += 30;
//    case 11: // ���µ�
//        w += 31;
//    case 10: // ���µ�
//        w += 30;
//    case 9:  // ���µ�
//        w += 31;
//    case 8:  // ���µ�
//        w += 31;
//    case 7:  // ���µ�
//        w += 30;
//    case 6:  // ���µ�
//        w += 31;
//    case 5:  // ���µ�    
//        w += 30;
//    case 4:  // ���µ�
//        w += 31;
//    case 3:  // ���µ�
//        if (leapYear(year))
//            w += 29;
//        else
//            w += 28;
//    case 2:  // ���µ���
//        w += 31;
//    case 1:  // 1�²�����
//        ;
//    }
//
//    // �õ�-6������Ϊ������
//    w = w % 7;
//
//    // ����������
//    if (w == 0)    
//        w = 7;  
//    return w;
//}
//
//void printMonth(int year, int month)
//{
//    int d = whatDay(year, month);
//    int n = 0;
//    cout << "  " << "һ  " << "��  " << "��  "
//        << "��  " << "��  " << "��  " << "��" << endl;
//
//
//    for (int i = 0; i < d - 1; i++)  
//    {
//        cout << "    ";    
//    }
//    switch (month)
//    {
//    case 1:
//        n = 31;
//        break;
//    case 2:
//        if (leapYear(year))
//            n = 29;
//        else
//            n = 28;
//        break;
//    case 3:
//        n = 31;
//        break;
//    case 4:
//        n = 30;
//        break;
//    case 5:
//        n = 31;
//        break;
//    case 6:
//        n = 30;     
//        break;     
//    case 7:
//        n = 31;
//        break;
//    case 8:
//        n = 31;
//        break;
//    case 9:
//        n = 30;
//        break;
//    case 10:
//        n = 31;
//        break;
//    case 11:
//        n = 30;
//        break;
//    case 12:
//        n = 31;
//        break;
//    }
//    for (int i = 1; i < n + 1; i++)
//    {
//        if (i < 10)
//            cout << "   " << i;
//        else
//            cout << "  " << i;
//        switch (d)
//        {
//        case 1:
//            if ((i % 7) == 0)
//                cout << endl;
//            break;
//        case 2:
//            if ((i % 7) == 6)
//                cout << endl;
//            break;
//        case 3:
//            if ((i % 7) == 5)
//                cout << endl;
//            break;
//        case 4:
//            if ((i % 7) == 4)
//                cout << endl;
//            break;
//        case 5:
//            if ((i % 7) == 3)
//                cout << endl;
//            break;
//        case 6:
//            if ((i % 7) == 2)
//                cout << endl;
//            break;
//        case 7:
//            if ((i % 7) == 1)
//                cout << endl;
//            break;
//        }
//    }
//    cout << endl;
//}
//
//int main()
//{
//    // �ꡢ��
//    int y, m;
//
//    // ��������
//    cin >> y >> m;
//
//    // ��������µ�����
//    printMonth(y, m);
//
//    return 0;
//}



#include<stdio.h>
 
   //����ĳ������·ݵĵ�һ�����ܼ���
   
	/*���չ�ʽ���£�
		W = [C / 4] - 2C + y + [y / 4] + [13 * (M + 1) / 5] + d - 1
		������:w = y + [y / 4] + [c / 4] - 2c + [26(m + 1) / 10] + d - 1
		��ʽ�еķ��ź������£�
		w�����ڣ� w��7ȡģ�ã�0 - �����գ�1 - ����һ��2 - ���ڶ���3 - ��������4 - �����ģ�5 - �����壬6 - ������
		c������ - 1��ǰ��λ����
		y���꣨����λ����
		m���£�m���ڵ���3��С�ڵ���14�����ڲ��չ�ʽ�У�ĳ���1��2��Ҫ������һ���13��14�������㣬����2003��1��1��Ҫ����2002���13��1�������㣩
		d����[]����ȡ������ֻҪ�������֡�
		*/
	    

int main()
{
	int y = 0, m = 0, d = 0;
	
	while (1)
	{  
			printf("��������Ҫ��ѯ��������\n:>");
	        scanf("%d%d%d", &y, &m, &d);
			int c = y / 100 - 1;
			int Y = y % 100;
			int M = (m > 2) ? m : m + 12;
			int w = Y + Y / 4 + c / 4 - 2 * c + 13 * (M + 1) / 5 + d -2;
			printf("%d\n", w %7);

	}

	
	
	

	return 0;
}
