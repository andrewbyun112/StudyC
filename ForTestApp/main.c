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
    //for�� p.158
    /*
    int a = 1;
    int i;

    for (i = 0; i < 3; i++)
    {
        a *= 2;
    }
    printf("a : %d\n", a);
    */

   //��ø�ݺ���
   /*
   int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */

    //3�� ����� ������ 1���� 100������ �� p.174
    /*
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0)
        {
            continue;
        }
        sum += i;
    }
    printf("sum = %d\n", sum);
    */

    //break�� ����� �ݺ��� ���� p.171
    
    int i, sum=0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        if (sum > 30) break;
    }
    printf("������ �� : %d\n", sum);
    printf("���������� ���� �� : %d\n", i);
    

	system("pause");
	return EXIT_SUCCESS;
}