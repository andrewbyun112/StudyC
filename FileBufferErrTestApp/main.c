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
#include <string.h>

// �����Լ�

int main(void) 
{
    FILE* fp;
    int age;
    char name[20];

    fp = fopen("a.txt", "r");
    if (fp == NULL) { return 1; }
    fscanf(fp, "%d", &age);
    fgetc(fp);
    //while(fgetc(fp) != '\n') {}

    fgets(name, sizeof(name), fp);

    printf("�̸� : %s, ���� : %d", name, age);
    fclose(fp);
       
	system("pause");
	return EXIT_SUCCESS;
}

