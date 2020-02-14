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

struct student_t
{
    //char name[20];
    int kor;
    int eng;
    int math;
};

void totalkor(struct student_t* st);
void totaleng(struct student_t* st);
void totalmath(struct student_t* st);

// �����Լ�
int main(void) 
{
    struct student_t sd[3];

    for (int i = 0; i < 3; i++)
    {
        printf("���� : ");
        scanf("%d", &sd[i].kor);

        printf("���� : ");
        scanf("%d", &sd[i].eng);

        printf("���� : ");
        scanf("%d", &sd[i].math);
    }

    totalkor(sd);
    totaleng(sd);
    totalmath(sd);

	system("pause");
	return EXIT_SUCCESS;
}

void totalkor(struct student_t* st)
{
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += st[i].kor;
    }
    printf("���� �հ� : %d, ���� ��� : %.1lf\n", total, total / 3.0);
}
void totaleng(struct student_t* st)
{
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += st[i].eng;
    }
    printf("���� �հ� : %d, ���� ��� : %.1lf\n", total, total / 3.0);
}
void totalmath(struct student_t* st)
{
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += st[i].math;
    }
    printf("���� �հ� : %d, ���� ��� : %.1lf\n", total, total / 3.0);
}