/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int res;
    
    res = sizeof(short) > sizeof(long);
    printf("%s\n", (res ==1)? "short" : "long");


	system("pause");
	return EXIT_SUCCESS;
}