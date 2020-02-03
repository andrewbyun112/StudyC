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

// 메인함수
int main(void) 
{
    //for문 p.158
    /*
    int a = 1;
    int i;

    for (i = 0; i < 3; i++)
    {
        a *= 2;
    }
    printf("a : %d\n", a);
    */

   //중첩반복문
   /*
   int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */

    //3의 배수를 제외한 1부터 100까지의 합 p.174
    /*
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0)
        {
            continue;
        }
        sum += i;
    }
    printf("sum = %d\n", sum);
    */

    //break를 사용한 반복문 종료 p.171
    
    /*int i, sum=0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        if (sum > 30) break;
    }
    printf("누적한 값 : %d\n", sum);
    printf("마지막으로 더한 값 : %d\n", i);*/

    int a, b;

    for (a = 0; a < 5; a++)
    {
        for (b = 0; b <=a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    int i, j, k;

    for (i = 0; i < 5; i++)
    {
        for (k = 5 - i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 0; j<=i+i ; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    

	system("pause");
	return EXIT_SUCCESS;
}