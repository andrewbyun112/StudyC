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
#include <Windows.h>
#include <conio.h>
#include <time.h>

#define start 5
#define Width 60
#define Height 30

typedef struct Snake {
    int x;
    int y;
} snake;

void gotoxy(int x, int y);
void GameStart();
void Gamelnit(snake* ps, snake* food);
// �����Լ�
int main(void) 
{
	printf("Hello World!\n");
    // type here.
	system("pause");
	return EXIT_SUCCESS;
}