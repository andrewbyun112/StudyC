/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Andrew Byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>     

// �����Լ�
//void assign(void);
//
//int main(void) 
//{
//    int a = 10, b = 20;
//    printf("��ȯ �� : %d, %d\n", a, b);
//    {
//        int temp;
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    printf("��ȯ �� : %d, %d\n", a, b);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//void assign(void)
//{
//    int b;
//    b = 10;
//    printf("assign�Լ� b : %d\n", b);
//}

void assign10(void);
void assign20(void);

int a;

int main(void)
{
    printf("�Լ� ȣ�� �� a�� : %d\n", a);

    assign10();
    assign20();

    printf("�Լ� ȣ�� �� a�� : %d\n", a);
    return 0;

}

void assign10(void)
{
    a = 10; // ���� ������ 10 ����
}
void assign20(void)
{
    int a; // ���� ������ ���� �̸��� ���������� ����

    a = 20; // �������� a�� 20 ����
    printf("�������� a�� : %d\n", a); // ���� ���� �� a
    return 0;
}
