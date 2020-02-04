/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 /포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Andrew Byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
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

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("평균 : %.1lf\n", *pg);
    */

    /*
    int a = 10 ;
    int b = 15 ;
    const int* pa = &a;

    printf("a값 : %d\n", *pa);
    pa = &b;
    printf("b값 : %d\n", *pa);
    pa = &a;
    a = 20;
    // *pa=20; 은 const때문에 에러뜸
    printf("a값 : %d\n", *pa);
    */

    /*
    char ch;
    int in;
    double db;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("ch 변수의 주소의 크기 : %d\n", sizeof(&ch));
    printf("in 변수의 주소의 크기 : %d\n", sizeof(&in));
    printf("db 변수의 주소의 크기 : %d\n\n", sizeof(&db));

    printf("ch* 포인터의 크기 : %d\n", sizeof(pc));
    printf("in* 포인터의 크기 : %d\n", sizeof(pi));
    printf("db* 포인터의 크기 : %d\n\n", sizeof(pd));

    printf("ch*의 변수의 크기 : %d\n", sizeof(*pc));
    printf("in*의 변수의 크기 : %d\n", sizeof(*pi));
    printf("db*의 변수의 크기 : %d\n\n", sizeof(*pd));
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