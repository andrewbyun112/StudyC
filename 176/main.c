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
#include <string.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT} ARROW;

int main(void)
{
    COLOR my_color = YELLOW, c;
    ARROW direction = UP;

    for (c = CYAN; c <= BLACK; c++)
    {
        direction++;
        direction = direction % 4;
        if (c == my_color)
        {
            break;
        }
    }

    switch (direction)
    {
    case UP: printf("���� ���� : ��"); break;
    case DOWN: printf("���� ���� : �Ʒ�"); break;
    case LEFT: printf("���� ���� : ����"); break;
    case RIGHT: printf("���� ���� : ������"); break;
    }
    return 0;
}
