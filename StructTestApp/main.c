/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 사용자 정의 자료형Structure 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    double grade;
    char name[20];
};

// 메인함수
int main(void) 
{
    struct student s1 = { 315, 2.4, "홍길동" },
        s2 = { 316, 3.6, "이순신" },
        s3 = { 317, 4.5, "세종대왕" };

    struct student max;

    max = s1;
    if (s2.grade > max.grade) max = s2;
    if (s3.grade > max.grade) max = s3;

    printf("학번 : %d\n", max.id);
    printf("학점 : %.1lf\n", max.grade);
    printf("이름 : %s\n", max.name);

	system("pause");
	return EXIT_SUCCESS;
}

