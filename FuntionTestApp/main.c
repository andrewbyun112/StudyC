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
/* �Ű������� ���� �Լ� p.193
int sum(int x, int y); // �Լ� ����
void get_num();

// �����Լ�
int main(void) 
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    get_num(); // void�Լ��� ���� �� 
    printf("result : %d\n", result);

	system("pause");
	return EXIT_SUCCESS;
}

void get_num()
{
    //...
}

// �հ� �Լ�
int sum(int x, int y)
{
    int temp;
    temp = x + y;
    return temp;
}
*/


/* ��ȯ���� ���� �Լ� p.195
void print_char(char ch, int count);

// �����Լ�
int main(void)
{
    print_char('@', 5);
    printf("\n");

    system("pause");
    return EXIT_SUCCESS;
}

void print_char(char ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }
    return;
}
*/


/*��� ȣ�� �Լ� p.198
void fruit(int count);

// �����Լ�
int main(void)
{
    fruit(1);

    system("pause");
    return EXIT_SUCCESS;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 3)
    {
        return;
    }
    fruit(count +1);
}
*/


//factorial �ǽ�
int factorial(int count);

// �����Լ�
int main(void)
{
    int result = factorial(6);
    printf("result = %d\n", result);
    system("pause");
    return EXIT_SUCCESS;
}

int factorial(int count)
{
    if (count == 1)
    {
        return 1;
    }
    return count * factorial(count - 1);
}