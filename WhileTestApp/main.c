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
	//while�� (����� ���� ���� ���) p.154
   /*
   int a = 1;

    while (a<10)
    {
        a *= 2;
    }
    printf("a : %d\n", a);
    */

    //while�� (��� ������ ���� ���� ���) p.154
    /*
    int a = 1;

    while (a < 10)
    {
        a *= 2;
        printf("a : %d\n", a);
    }
    */

    

    //do while�� p.161
    /*
    int a = 1;

    do
    {
        a *= 2;
    } while (a<10);
    printf("a : %d\n", a);
    */


    int count = 0;
    while (1)
    {
        printf("Be Happy!\n");
        count++;
        if (count ==10) 
        {
            break;
        }
    }

	system("pause");
	return EXIT_SUCCESS;
}