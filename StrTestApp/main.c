/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���ڿ� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Andrew byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�

//int main(void)
//{
//
//    /*
//    // ���ڿ� ����� �ּҶ� ����
//    char fruit[80] = "apple";
//
//    printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
//    printf("�ι�° ������ �ּ� �� : %p\n", "apple"+1);
//    printf("ù��° ���� : %c\n", *"apple");
//    printf("�ι�° ���� : %c\n", *("apple"+1));
//    printf("�迭�� ǥ���� �׹�° ���� : %c\n", "apple"[3]);
//    printf("fruit�� ���� �ּ� : %p\n", fruit);
//
//    //char �����ͷ� ���ڿ� ���
//    char *dessert = "apple";
//
//    printf("������ �Ľ��� %s�Դϴ�.\n", dessert);
//    dessert = "banana";
//    printf("������ �Ľ��� %s�Դϴ�.\n", dessert);
//    */
//
//    /*
//    // scanf �Լ��� ����� ���ڿ� �Է�
//    char str[80];
//
//    printf("���ڿ� �Է� : ");
//    scanf("%s", str);
//    printf("ù��° �ܾ� : %s\n", str);
//    scanf("%s", str);
//    printf("���ۿ� �����ִ� �ι�° �ܾ� : %s\n", str);
//    */
//
//    /*
//    //gets �Լ��� �� ���� ���ڿ� �Է�
//    char str[80];
//
//    printf("������ ���Ե� ���ڿ� �Է� : ");
//    gets(str);
//    printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);
//    */
//    /*
//    char str[80];
//
//    printf("������ ���Ե� ���ڿ� �Է� : ");
//    fgets(str, sizeof(str), stdin);
//
//    printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
//    */
//
//    /*
//    // ���� ���� ���� ����
//    char str[80];
//
//    printf("������ ���Ե� ���ڿ� �Է� : ");
//    fgets(str, sizeof(str), stdin);
//    str[strlen(str) - 1] = '\0'; // ���� ���� ����
//
//    printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);
//    */
//
//    /*
//    // ���� ���ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���
//    int age;
//    char name[20];
//
//    printf("���� �Է� : ");
//    scanf("%d", &age);
//    //getchar();
//    //fgetc(stdin); // ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����
//    scanf("%*c"); // ���ۿ��� �ϳ��� ���ڸ� �о ����, ������ �ʿ� ����
//
//    printf("�̸� �Է� : ");
//    gets(name);
//
//    printf("���� : %d, �̸� : %s\n", age, name);
//    */
//
//
//    //// ���ڿ��� ����ϴ� puts�� fputs �Լ�
//    //char str[80] = "apple juice";
//    //char* ps = "banana";
//
//    //puts(str);
//    //fputs(ps, stdout);
//    //puts(" milk");
//
//    /*
//    char str1[80] = "strawberry";
//    char str2[80] = "apple";
//    char* ps1 = "banana";
//    char* ps2 = str2;
//
//    printf("���� ���ڿ� : %s\n", str1);
//    strcpy(str1, str2); // strcpy(���������, ������ ����);
//    printf("�ٲ� ���ڿ� : %s\n", str1);
//
//    strcpy(str1, ps1);
//    printf("�ٲ� ���ڿ� : %s\n", str1);
//
//    strcpy(str1, ps2);
//    printf("�ٲ� ���ڿ� : %s\n", str1);
//
//    strcpy(str1, "banana");
//    printf("�ٲ� ���ڿ� : %s\n", str1);
//    */
//
//    //char str[20] = "mango tree";
//
//    //strncpy(str, "apple-pie", 5);
//    //// apple�� ���̵��� �Ϸ��� �ι��� ������ ���� // str[5] = '\0':
//    //printf("%s\n", str);
//
//    /*
//    char str[80] = "straw";
//
//    strcat(str, "berry"); // str�迭�� ���ڿ� ���̱�
//    printf("%s\n", str);
//    strncat(str, "piece", 3); // str �迭�� 3���� ���� ���̱�
//    printf("%s\n", str);
//    */
//}



//int main(void)
//{
//    char str1[80], str2[80];
//    char* resp;
//
//    printf("2���� ���� �̸� �Է� : ");
//    scanf("%s%s", str1, str2);
//
//    if (strlen(str1) > strlen(str2))
//    {
//        resp = str1;
//    }
//    else
//    {
//        resp = str2;
//    }
//    printf("�̸��� �� ������ : %s\n", resp);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

int main(void)
{
    char str1[80] = "apple";
    char str2[80] = "banana";

    printf("������ ���߿� ������ ���� �̸� : ");
    if (strcmp(str1, str2) > 0)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }

    system("pause");
    return EXIT_SUCCESS;
}