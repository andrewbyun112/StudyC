/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ��ó�� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"


// �����Լ�
int main(void) 
{
    /*Student s1 = { 315, "ȫ�浿" };
    printf("�й� : %d, �̸� : %s\n", s1.num, s1.name);*/

    /*double radius, area;

    printf("�������� �Է��ϼ��� : ");
    scanf("%lf", &radius);
    area = PI * radius * radius;

    if (area > LIMIT) { ERR_PRN; }
    else printf("���� ���� : %.2lf (%s)\n", area, MSG);*/

    /*int a = 10, b = 20;
    double x = 30.5, y = 40.4;
    int res;

    printf("a + b = %d\n", SUM(a, b));
    printf("x + y = %.1lf\n", SUM(x, y));
    res = 30 / MUL(2, 5);
    printf("res : %d\n", res);*/

    /*int a1, a2;

    NAME_CAT(a, 1) = 10;
    NAME_CAT(a, 2) = 20;
    PRINT_EXPR(a1 + a2);
    PRINT_EXPR(a2 - a1);*/

    int max;

#if VER >= 6
    printf("���� %d�Դϴ�.\n", VER);
#endif // VER >= 6

#ifdef BIT16
    max = 32767;
#else
    max = 2147483647;
#endif // BIT ==16

    printf("int�� ������ �ִ� : %d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}
