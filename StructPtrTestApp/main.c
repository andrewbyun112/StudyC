/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü �����Ϳ� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>

//struct score
//{
//    int kor;
//    int eng;
//    int math;
//};
//
//// �����Լ�
//int main(void) 
//{
//    struct score yuni = { 90,80,70 };
//    struct score* ps = &yuni;
//
//    printf("���� : %d\n", (*ps).kor);
//    printf("���� : %d\n", ps->eng);
//    printf("���� : %d\n", ps->math);
//
//    system("pause");
//	return EXIT_SUCCESS;
//}

/*
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[20];
};

int main(void)
{
    struct address list[5] = { {"ȫ�浿", 23, "111-1111", "�︪�� ����"},
    {"�̼���", 25, "222-2222", "���� ��õ��"},
    {"�庸��", 35, "333-3333", "�ϵ� û����"},
    {"������", 45, "444-4444", "�泲 õ��"},
    {"���߱�", 55, "555-5555", "Ȳ�ص� ����"} };
    
    for (int i = 0; i < 5; i++)
    {
        printf("%10s%10d%10s%20s\n", list[i].name, list[i].age,
            list[i].tel, list[i].addr);
    }
    return 0;
}
*/

/*
struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[20];
};

void print_list(struct address* lp);

int main(void)
{
    struct address list[5] = { {"ȫ�浿", 23, "111-1111", "�︪�� ����"},
    {"�̼���", 25, "222-2222", "���� ��õ��"},
    {"�庸��", 35, "333-3333", "�ϵ� û����"},
    {"������", 45, "444-4444", "�泲 õ��"},
    {"���߱�", 55, "555-5555", "Ȳ�ص� ����"} };

    print_list(list);

    return 0;
}

void print_list(struct address* lp)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%10s%10d%10s%20s\n", (*(lp+i)).name, (*(lp+i)).age,
            (lp+i)->tel, lp[i].addr);   // �迭 ǥ��  : lp[i].name  
    }                                   // �����ڻ�� : (lp+i)->name
}                                       // ���������� : (*(lp+i).name

*/

#include <stdio.h>

struct list
{
    int num;
    struct list* next;
};

int main(void)
{
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);
    printf("head->next->next->num : %d", head->next->next->num);
    return 0;
}