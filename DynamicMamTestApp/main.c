/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 동적할당 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int* pi;
    int size = 5;
    int count = 0;
    int num = 0;
    int i;

    pi = (int*)calloc(size, sizeof(int));
    while (1)
    {
        printf("양수만 입력하세요 => ");
        scanf("%d", &num);
        if (num <= 0) break;
        if (count == size)
        {
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int));
        }
        pi[count++] = num;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }
    free(pi);

	system("pause");
	return EXIT_SUCCESS;
}