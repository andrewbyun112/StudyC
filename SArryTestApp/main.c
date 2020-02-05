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
//int main(void) 
//{
//    int score[3][4];
//    int total;
//    double avg;
//    int i, j;
//
//    for ( i = 0; i < 3; i++)
//    {
//        printf("%d님의 4과목 점수 입력 : ",i+1);
//        for (j = 0; j < 4; j++)
//        {
//            scanf("%d", &score[i][j]);
//        }
//    }
//
//    for (i = 0; i < 3; i++)
//    {
//        total = 0;
//        for (j = 0; j < 4; j++)
//        {
//            total += score[i][j];
//        }
//        avg = total / 4.0;
//        printf("%d님의 총점 : %d, 평균 : %.2lf\n", i+1,total, avg);
//    }
//	system("pause");
//	return EXIT_SUCCESS;
//}

//int main(void)
//{
//    int score[3][4] = { { 1,2 }, { 5,6,7,8 }, { 9,10,11,12 } };
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        for ( j = 0; j < 4; j++)
//        {
//            printf("%5d", score[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

int main(void)
{
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal) / sizeof(animal[i]);
    for (i = 0; i < count; i++)
    {
        scanf("%s", animal[i]);
    }

    for (i = 0; i < count; i++)
    {
        printf("%s ", animal[i]);
    }
    return 0;
}