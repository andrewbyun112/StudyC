/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 /선택문 작업
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Andrew Byun SJ
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    //if문 p.123
    /*
    int a = 20, b = 0;

    if (a > 10)
    {
        b = a;
    }
    printf("a: %d, b: %d\n", a, b);
    */

    //if else문 p.125
    /*
    int a = 10;

    if (a >= 0)
    {
        a = 1;
    }
    else
    {
        a = -1;
    }

    printf("a : %d\n", a);
    */

    //if else if else문 p.129
    /*
    int a = -10, b = 0;

    if (a > 0)
    {
        b = 1;
    }
    else if (a == 0)
    {
        b = 2;
    }
    else if(a < 0)
    {
        b = 3;
    }
    else
    {
        b = -1;
    }

    printf("a =%d, b=%d\n", a, b);
    */

    //if문 중첩 p.138
    /*
    int a = 20, b = 20, c=0;
    
    if (a > 10)
    {
        if (b >= 0)
        {
            b = 1;
        }
        else
        {
            c = -1;
        }
    }
    else
    {
        c = 0;
    }

    printf("a : %d, b=%d, c=%d\n", a, b, c);
    */

    //switch case문 p.144

	system("pause");
	return EXIT_SUCCESS;
}