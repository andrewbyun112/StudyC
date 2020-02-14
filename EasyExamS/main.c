/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

void grade(int *x);

// 메인함수
int main(void) 
{
    int a;
    a = 0;

    printf("점수 : ");
    scanf("%d", &a);
    grade(&a);

	system("pause");
	return EXIT_SUCCESS;
}

void grade(int* x)
{
    int b = 0;
    b = *x;
    if (90 <= b && b <= 100)
    {
        printf("A\n");
    }
    if (70 <= b && b <= 89)
    {
        printf("B\n");
    }
    if (60 <= b && b <= 69)
    {
        printf("C\n");
    }
    if (50 <= b && b <= 59)
    {
        printf("D\n");
    }
    if (0 <= b && b <= 39)
    {
        printf("F\n");
    }
    return b;
}