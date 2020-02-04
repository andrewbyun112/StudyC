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
    int res;
    
    res = sizeof(short) > sizeof(long);
    printf("%s\n", (res ==1)? "short" : "long");


	system("pause");
	return EXIT_SUCCESS;
}