/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���� ���� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>

//void auto_func(void);
//void static_func(void);
//
//// �����Լ�
//int main(void) 
//{
//    printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
//    for (int i = 0; i < 3; i++)
//    {
//        auto_func();
//    }
//
//    printf("���� ���� ����(static)�� ����� �Ѽ�...\n");
//    for (int i = 0; i < 3; i++)
//    {
//        static_func();
//    }
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//void auto_func(void)
//{
//    int a = 0;
//
//    a++;
//    printf("%d\n", a);
//}
//void static_func(void)
//{
//    static int a;
//    a++;
//    printf("%d\n", a);
//}

//int main(void)
//{
//    register int i;
//    int sum = 0;
//
//    for (int i = 0; i <= 10000; i++)
//    {
//        sum += i;
//    }
//
//    printf("sum is %d\n", sum);
//    return 0;
//}


//void add_ten(int a);
//
//
//int main(void)
//{
//    int a = 10;
//
//    add_ten(a);
//    printf("a : %d\n", a);
//    
//    return 0;
//}
//
//void add_ten(int a)
//{
//    a = a + 10;
//}

//int ���� �ּҸ� ����
//void add_ten(int *pa);
//
//
//int main(void)
//{
//    int a = 10;
//
//    add_ten(&a);
//    printf("a : %d\n", a);
//
//    return 0;
//}
//
//void add_ten(int *pa)
//{
//    *pa = *pa + 10;
//}


//������� �ּҸ� ��������
int* sum(int a, int b);

int main(void)
{
    int* resp;

    resp = sum(10, 20);
    printf("�� ������ �� : %d\n", *resp);

    return 0;
}

int* sum(int a, int b)
{
    static int res;

    res = a + b;
    return &res;
}


