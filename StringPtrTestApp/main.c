/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���ڿ� �迭
  first created - 2020.02.06
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
   /* char* animal[4];
    int i;

    animal[0] = "elephant";
    animal[1] = "tiger";
    animal[2] = "cat";
    animal[3] = "dog";

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", animal[i]);
    }*/

    int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 5,6,7,8 };
    int ary3[4] = { 9,10,11,12 };
    int* pary[3] = { ary1,ary2,ary3 }; // ��Ⱑ i
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }
	system("pause");
	return EXIT_SUCCESS;
}
