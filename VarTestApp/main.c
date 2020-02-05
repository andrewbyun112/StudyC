/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Andrew Byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>     

// 메인함수
//void assign(void);
//
//int main(void) 
//{
//    int a = 10, b = 20;
//    printf("교환 전 : %d, %d\n", a, b);
//    {
//        int temp;
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    printf("교환 후 : %d, %d\n", a, b);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//void assign(void)
//{
//    int b;
//    b = 10;
//    printf("assign함수 b : %d\n", b);
//}

void assign10(void);
void assign20(void);

int a;

int main(void)
{
    printf("함수 호출 전 a값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a값 : %d\n", a);
    return 0;

}

void assign10(void)
{
    a = 10; // 전역 변수에 10 대입
}
void assign20(void)
{
    int a; // 전역 변수와 같은 이름의 지역변수를 선언

    a = 20; // 지역변수 a에 20 대입
    printf("지역변수 a값 : %d\n", a); // 지역 변수 값 a
    return 0;
}
