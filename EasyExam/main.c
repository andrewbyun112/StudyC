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
    int total = 0;

    for (int i = 0; i <= 300; i)
    {
        i += 3;
        total += i;
        
    }
    printf("1부터 300까지 3공배수 총합 : %d", total);
	
    system("pause");
	return EXIT_SUCCESS;
}