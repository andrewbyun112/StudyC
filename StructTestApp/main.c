/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����� ���� �ڷ���Structure �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    double grade;
    char name[20];
};

// �����Լ�
int main(void) 
{
    struct student s1 = { 315, 2.4, "ȫ�浿" },
        s2 = { 316, 3.6, "�̼���" },
        s3 = { 317, 4.5, "�������" };

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;

    printf("�й� : %d\n", max.id);
    printf("���� : %.1lf\n", max.grade);
    printf("�̸� : %s\n", max.name);

	system("pause");
	return EXIT_SUCCESS;
}

