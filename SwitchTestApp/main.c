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
    //switch case�� p.145   
    /*
    int rank = 0, res = 0;
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        res = 300;
        break;
    case 2:
        res = 200;
        break;
    case 3:
        res = 100;
        break;
    default:
        res = 10;
        break;
    }
    printf("rank = %d, res=%d\n",rank, res);
    */

    //break�� ������ ��ø�� p.147
    /*
    int rank = 0, res = 0;
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        res += 300;
        break;
    case 2:
        res += 200;
        break;
    case 3:
        res += 100;
        break;
    default:
        res += 10;
        break;
    }
    printf("rank = %d, res=%d\n", rank, res);
    */

    //switch���� if������ �ٲ㺸�� p.148
    /*
    int rank = 0, res = 0;
    scanf("%d", &rank);

    if (rank==1)
    {
        res = 300;
    }
    else if (rank == 2)
    {
        res = 200;
    }
    else if (rank == 3)
    {
        res = 100;
    }
    else
    {
        res = 10;
    }
    printf("rank = %d, res=%d\n", rank, res);

	system("pause");
    */

	return EXIT_SUCCESS;
}