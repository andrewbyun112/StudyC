/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 배열과 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Andrew Byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>
// 함수 선언
void print_ary(int* pa, int size);

// 메인함수
int main(void) 
{
    /*
    int ary[3] = { 0 };
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세번째 요소 입력 : ");
    scanf("%d", (ary + 2));

    for (int i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));
    }
    */


    /*
    //배열명 역할을 하는 포인터
    int ary[3] = { 0 };
    int* pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for (i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }
    */

    /*
    //배열명처럼 사용되는 포인터
    int ary[5] = { 10, 20, 30, 40, 50 };
    int* pa = ary;
    int* pb = pa + 3;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;
    printf("pb-pa : %u\n", pb - pa);


    printf("앞에 있는 배열 요소의 값 출력 : ");
    if (pa < pb) printf("%d\n", *pa);
    else printf("%d\n", *pb);
    */

    int ary1[5] = { 10, 20, 30, 40, 50 };
    int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
    int size = 0;
    size = sizeof(ary1) / sizeof(ary1[0]);
    print_ary(ary1, size);
    print_ary(ary2, 7);

	system("pause");
	return EXIT_SUCCESS;
}

// 배열 출력 함수
void print_ary(int* pa, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%5d", pa[i]); // pa[i] == *(pa + i)
    }
    printf("\n");
}