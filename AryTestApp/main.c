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
   /* 
   //�迭����� ��� p.209
   int ary[5], scan_res;

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    scan_res = scanf("%d", &ary[3]);

    for (int i = 0; i < 5; i++)
    {
        printf("ary[%d] = %d\n", i, ary[i]);
    }
    */


    //�迭�� �ݺ��� p.214
   
    int score[5];
    int total =0;
    double average;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    for  (int i = 0; i < count; i++)
    {
        total += score[i];
    }
    average = total / (double)count;

    for (int i = 0; i < count; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("��� : %.1lf\n", average);

	system("pause");
	return EXIT_SUCCESS;
}