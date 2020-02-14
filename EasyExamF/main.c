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
#include <stdbool.h>

typedef struct node_type {
    int node_index;
    double data;
    struct node_type* next;
};

// 메인함수
int main(void) 
{


	system("pause");
	return EXIT_SUCCESS;
}