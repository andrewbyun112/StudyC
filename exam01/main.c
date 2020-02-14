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
#include <string.h>

enum menu { 입력, 수정, 삭제, 전체출력, 검색, 종료 };

struct namecard
{
    int cardnum;
    char name[20];
    char tell[20];
    char email[30];
};

void input_business_card(struct namecard *);
void show_all_cards(struct namecard *);
void search_business_card(struct namecard *);

// 메인함수
int main(void) 
{
    int num = 0;
    struct namecard list[3];

    FILE* namecard;
    namecard = fopen("입력.txt", "w");
    if (namecard == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    while (1)
    {
        printf("1.입력  2.수정  3.삭제  4.전체출력  5.검색  6.종료\n");
        printf(">>>>>선택하세요<<<<<");
        enum menu mn;
        
        scanf_s("%d", &num);
        mn = num;
        switch (mn - 1)
        {
        case 입력:
            printf("입력 메뉴입니다.\n");
            input_business_card(list);
            break;
        case 수정:
            break;
        case 삭제:
            break;
        case 전체출력:
            printf("전체 출력 메뉴입니다.\n");
            show_all_cards(list);
            break;
        case 검색:
            printf("검색 메뉴입니다.\n");
            search_business_card(list);
            break;
        case 종료:
            break;
        }
    }
    fclose(namecard);

	system("pause");
	return EXIT_SUCCESS;
}

// 명함 입력 함수
void input_business_card(struct namecard *li) 
{
    for (int i = 0; i < 3; i++)
    {
        li[i].cardnum = i + 1;
        printf("명함 번호 : %d\n", li[i].cardnum);

        printf("이름 : ");
        scanf("%s", &li[i].name);

        printf("폰번호 : ");
        scanf("%s", &li[i].tell);

        printf("이메일 : ");
        scanf("%s", &li[i].email);

        printf("\n");
    }
}

// 전체 명함정보 출력 함수
void show_all_cards(struct namecard *al) 
{
    for (int i = 0; i < 3; i++)
    {
        al[i].cardnum = i + 1;
        printf("%10d %10s %10s %10s\n", al[i].cardnum, al[i].name, al[i].tell, al[i].email);
    }
}

void search_business_card(struct namecard* sbc)
{
    int temp;
    printf("찾을 명함번호를 적어주세요.");
    scanf_s("%d", &temp);
    temp = sbc[temp].cardnum;
    printf("%10d %10s %10s %10s\n", sbc[temp].cardnum, sbc[temp].name,
            sbc[temp].tell, sbc[temp].email);
}

