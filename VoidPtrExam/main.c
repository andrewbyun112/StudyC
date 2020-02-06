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
    int ary[5] = { 10,20,30,40,50 };
    void* vp = ary;

    printf("%d\n", *((int*)vp+2));

	system("pause");
	return EXIT_SUCCESS;
}