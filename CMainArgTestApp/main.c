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
int main(int argc, char** argv)
{
    if (argc <= 1)
    {
        printf("명령 구문이 올바르지 않습니다.\n");
        exit(1);
    }

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    system("pause");
    return EXIT_SUCCESS;
}