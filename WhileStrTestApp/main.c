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
#include <string.h>

// 메인함수
int main(void) 
{
    char str1[80], str2[80];
    
    while (1)
    {
        printf("두개의 과일 : ");
        scanf("%s%s", str1, str2);
       
        if (str1[0] =='X'|| str2[0] == 'X') // if문 안에 == , 문자니까 ''
            break;
        else
        {
            if (strcmp(str1, str2) < 0)
            {
                printf("%s\n", str1);
            }
            else
            {
                printf("%s\n", str2);
            }
        }
    }

	system("pause");
	return EXIT_SUCCESS;
}