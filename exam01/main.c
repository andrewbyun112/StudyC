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

enum menu { �Է�, ����, ����, ��ü���, �˻�, ���� };

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

// �����Լ�
int main(void) 
{
    int num = 0;
    struct namecard list[3];

    FILE* namecard;
    namecard = fopen("�Է�.txt", "w");
    if (namecard == NULL)
    {
        printf("������ ������ �ʾҽ��ϴ�.\n");
        return 1;
    }
    while (1)
    {
        printf("1.�Է�  2.����  3.����  4.��ü���  5.�˻�  6.����\n");
        printf(">>>>>�����ϼ���<<<<<");
        enum menu mn;
        
        scanf_s("%d", &num);
        mn = num;
        switch (mn - 1)
        {
        case �Է�:
            printf("�Է� �޴��Դϴ�.\n");
            input_business_card(list);
            break;
        case ����:
            break;
        case ����:
            break;
        case ��ü���:
            printf("��ü ��� �޴��Դϴ�.\n");
            show_all_cards(list);
            break;
        case �˻�:
            printf("�˻� �޴��Դϴ�.\n");
            search_business_card(list);
            break;
        case ����:
            break;
        }
    }
    fclose(namecard);

	system("pause");
	return EXIT_SUCCESS;
}

// ���� �Է� �Լ�
void input_business_card(struct namecard *li) 
{
    for (int i = 0; i < 3; i++)
    {
        li[i].cardnum = i + 1;
        printf("���� ��ȣ : %d\n", li[i].cardnum);

        printf("�̸� : ");
        scanf("%s", &li[i].name);

        printf("����ȣ : ");
        scanf("%s", &li[i].tell);

        printf("�̸��� : ");
        scanf("%s", &li[i].email);

        printf("\n");
    }
}

// ��ü �������� ��� �Լ�
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
    printf("ã�� ���Թ�ȣ�� �����ּ���.");
    scanf_s("%d", &temp);
    temp = sbc[temp].cardnum;
    printf("%10d %10s %10s %10s\n", sbc[temp].cardnum, sbc[temp].name,
            sbc[temp].tell, sbc[temp].email);
}

