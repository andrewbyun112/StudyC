/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 문자 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Andrew Byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*
    char small, cap = 'H';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }
    printf("대문자 : %c\n", cap);
    printf("소문자 : %c\n", small);

    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    printf("[%c %c]", ch1, ch2);
    */
    
    /*
    char ch;
    ch = getchar();

    printf("입력한 문자 : ");
    putchar(ch);
    putchar('\n');
    */

    /*
    char ch;

    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    putchar('\n');
    */

    /* 
    // 문자를 아스키 코드로 변환
    int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1)
        {
            break;
        }
        printf("%d ", ch);
    }
    */


    /*
    //아스키코드를 문자로 변환
    int res;
    char ch;

    while (1)
    {
        res = scanf("%u", &ch);
        if (res == -1)
        {
            break;
        }
        printf("%c ", ch);
    }
    */

    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();

    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c\n", num, grade);
    


	system("pause");
	return EXIT_SUCCESS;
}