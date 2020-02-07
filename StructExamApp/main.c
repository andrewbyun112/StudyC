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

struct profile
{
    int num;
    char name[20];
    char* skill;
};

struct sports
{
    char* event;
    struct profile player;
};

// 메인함수
int main(void) 
{
    struct sports a;

    printf("skill : ");

    a.event = (char*)malloc(80);
    strcpy(a.event, "figure skating");
    a.player.num = 19;
    a.player.skill = (char*)malloc(80); //?
    scanf("%s", &a.player.skill);

    printf("%s\n", a.event);
    printf("%d\n", a.player.num);
    printf("%s\n", a.player.skill);

	system("pause");
	return EXIT_SUCCESS;
}