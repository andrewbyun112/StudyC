/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 구조체 포인터와 연산자
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
//// 메인함수
//int main(void) 
//{
//    struct score yuni = { 90,80,70 };
//    struct score* ps = &yuni;
//
//    printf("국어 : %d\n", (*ps).kor);
//    printf("영어 : %d\n", ps->eng);
//    printf("수학 : %d\n", ps->math);
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
    struct address list[5] = { {"홍길동", 23, "111-1111", "울릉도 독도"},
    {"이순신", 25, "222-2222", "서울 건천동"},
    {"장보고", 35, "333-3333", "완도 청해진"},
    {"유관순", 45, "444-4444", "충남 천안"},
    {"안중근", 55, "555-5555", "황해도 해주"} };
    
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
    struct address list[5] = { {"홍길동", 23, "111-1111", "울릉도 독도"},
    {"이순신", 25, "222-2222", "서울 건천동"},
    {"장보고", 35, "333-3333", "완도 청해진"},
    {"유관순", 45, "444-4444", "충남 천안"},
    {"안중근", 55, "555-5555", "황해도 해주"} };

    print_list(list);

    return 0;
}

void print_list(struct address* lp)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%10s%10d%10s%20s\n", (*(lp+i)).name, (*(lp+i)).age,
            (lp+i)->tel, lp[i].addr);   // 배열 표현  : lp[i].name  
    }                                   // 연산자사용 : (lp+i)->name
}                                       // 포인터포현 : (*(lp+i).name

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

    printf("head->num : %d\n", (*head).num);
    printf("head->next->num : %d\n", head->next->num);
    printf("head->next->next->num : %d", head->next->next->num);
    return 0;
}