/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 이중 포인터 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수

void print_ary(int(*pa)[4]);
//void swap_ptr(char** ppa, char** ppb);
//void print_str(char** pps, int cnt);
//
//int main(void) 
//{
//    char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
//    int count;
//
//    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
//    print_str(ptr_ary, count);
//
//    return 0;
//
//   /* int a = 10;
//    int* pi;
//    int** ppi;
//
//    pi = &a;
//    ppi = &pi;
//
//    printf("-----------------------------------------------\n");
//    printf("변수   변수값   &연산     *연산       **연산   \n");
//    printf("-----------------------------------------------\n");
//    printf("  a%10d%10p\n", a, &a);
//    printf(" pi%10p%10p%10d\n", pi, &pi, *pi);
//    printf("ppi%10p%10p%10p%10d\n", ppi, &ppi, *ppi, **ppi);
//    printf("-----------------------------------------------\n");*/
//
//    /*char* pa = "success";
//    char* pb = "failure";
//
//    printf("pa -> %s, pb -> %s\n", pa, pb);
//    swap_ptr(&pa, &pb);
//    printf("pa -> %s, pb -> %s\n", pa, pb);
//
//	system("pause");
//	return EXIT_SUCCESS;*/
//}
////void swap_ptr(char** ppa, char** ppb)
////{
////    char* pt;
////
////    pt = *ppa;
////    *ppa = *ppb;
////    *ppb = pt;
////}
//void print_str(char** pps, int cnt)
//{
//    int i;
//
//    for (i = 0; i < cnt; i++)
//    {
//        printf("%s\n", pps[i]);
//    }
//}
int main(void)
{
    /*int ary[5] = { 1,2,3,4 };

    printf("%d\n", *ary);
    printf("%p\n", *&ary);
    printf("%p\n", (ary + 1));
    printf("%p\n", &ary + 1);
    printf("%d\n", *(ary + 1));
    printf("%p\n", *&ary + 1);

    return 0;*/

    /*int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int(*pa)[4];
    pa = ary;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }*/

    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    print_ary(ary);

    return 0;
}

void print_ary(int(*pa)[4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}