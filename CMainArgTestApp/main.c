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
int main(int argc, char** argv)
{
    if (argc <= 1)
    {
        printf("��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        exit(1);
    }

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    system("pause");
    return EXIT_SUCCESS;
}