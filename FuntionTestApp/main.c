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
/* 매개변수가 없는 함수 p.193
int sum(int x, int y); // 함수 선언
void get_num();

// 메인함수
int main(void) 
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    get_num(); // void함수를 썼을 때 
    printf("result : %d\n", result);

	system("pause");
	return EXIT_SUCCESS;
}

void get_num()
{
    //...
}

// 합계 함수
int sum(int x, int y)
{
    int temp;
    temp = x + y;
    return temp;
}
*/


/* 반환값이 없는 함수 p.195
void print_char(char ch, int count);

// 메인함수
int main(void)
{
    print_char('@', 5);
    printf("\n");

    system("pause");
    return EXIT_SUCCESS;
}

void print_char(char ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }
    return;
}
*/


/*재귀 호출 함수 p.198
void fruit(int count);

// 메인함수
int main(void)
{
    fruit(1);

    system("pause");
    return EXIT_SUCCESS;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 3)
    {
        return;
    }
    fruit(count +1);
}
*/


//factorial 실습
int factorial(int count);

// 메인함수
int main(void)
{
    int result = factorial(6);
    printf("result = %d\n", result);
    system("pause");
    return EXIT_SUCCESS;
}

int factorial(int count)
{
    if (count == 1)
    {
        return 1;
    }
    return count * factorial(count - 1);
}