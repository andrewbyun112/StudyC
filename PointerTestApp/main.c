/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� /������
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Andrew Byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    /*
    int a = 10 ;
    int b = 15 ;
    int total;
    double avg;

    int* pa, * pb;
    int* pt = &total;
    double* pg = &avg;
    //int pt;
    //pt = &total;
    //double pg;
    //pg = &avg;
    pa = &a;
    pb = &b;


    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("�� ������ �� : %d, %d\n", *pa, *pb);
    printf("�� ������ �� : %d\n", *pt);
    printf("��� : %.1lf\n", *pg);
    */

    /*
    int a = 10 ;
    int b = 15 ;
    const int* pa = &a;

    printf("a�� : %d\n", *pa);
    pa = &b;
    printf("b�� : %d\n", *pa);
    pa = &a;
    a = 20;
    // *pa=20; �� const������ ������
    printf("a�� : %d\n", *pa);
    */

    /*
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("ch ������ �ּ��� ũ�� : %d\n", sizeof(&ch));
    printf("in ������ �ּ��� ũ�� : %d\n", sizeof(&in));
    printf("db ������ �ּ��� ũ�� : %d\n\n", sizeof(&db));

    printf("ch* �������� ũ�� : %d\n", sizeof(pc));
    printf("in* �������� ũ�� : %d\n", sizeof(pi));
    printf("db* �������� ũ�� : %d\n\n", sizeof(pd));

    printf("ch*�� ������ ũ�� : %d\n", sizeof(*pc));
    printf("in*�� ������ ũ�� : %d\n", sizeof(*pi));
    printf("db*�� ������ ũ�� : %d\n\n", sizeof(*pd));
    */

    int a = 10;
    int* p = &a;
    double* pd;

    pd = p;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%lf\n", *pd);

	system("pause");
	return EXIT_SUCCESS;
}