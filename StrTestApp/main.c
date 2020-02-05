/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 문자열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Andrew byun seungjae
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수

//int main(void)
//{
//
//    /*
//    // 문자열 상수가 주소란 증거
//    char fruit[80] = "apple";
//
//    printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
//    printf("두번째 문자의 주소 값 : %p\n", "apple"+1);
//    printf("첫번째 문자 : %c\n", *"apple");
//    printf("두번째 문자 : %c\n", *("apple"+1));
//    printf("배열로 표현한 네번째 문자 : %c\n", "apple"[3]);
//    printf("fruit의 시작 주소 : %p\n", fruit);
//
//    //char 포인터로 문자열 사용
//    char *dessert = "apple";
//
//    printf("오늘의 후식은 %s입니다.\n", dessert);
//    dessert = "banana";
//    printf("내일의 후식은 %s입니다.\n", dessert);
//    */
//
//    /*
//    // scanf 함수를 사용한 문자열 입력
//    char str[80];
//
//    printf("문자열 입력 : ");
//    scanf("%s", str);
//    printf("첫번째 단어 : %s\n", str);
//    scanf("%s", str);
//    printf("버퍼에 남아있는 두번째 단어 : %s\n", str);
//    */
//
//    /*
//    //gets 함수로 한 줄의 문자열 입력
//    char str[80];
//
//    printf("공백이 포함된 문자열 입력 : ");
//    gets(str);
//    printf("입력한 문자열은 %s입니다.\n", str);
//    */
//    /*
//    char str[80];
//
//    printf("공백이 포함된 문자열 입력 : ");
//    fgets(str, sizeof(str), stdin);
//
//    printf("입력된 문자열은 %s입니다.\n", str);
//    */
//
//    /*
//    // 개행 문자 제거 과정
//    char str[80];
//
//    printf("공백이 포함된 문자열 입력 : ");
//    fgets(str, sizeof(str), stdin);
//    str[strlen(str) - 1] = '\0'; // 개행 문자 제거
//
//    printf("입력된 문자열은 %s입니다.\n", str);
//    */
//
//    /*
//    // 개행 문자로 인해 gets 함수가 입력을 못하는 경우
//    int age;
//    char name[20];
//
//    printf("나이 입력 : ");
//    scanf("%d", &age);
//    //getchar();
//    //fgetc(stdin); // 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
//    scanf("%*c"); // 버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요 없음
//
//    printf("이름 입력 : ");
//    gets(name);
//
//    printf("나이 : %d, 이름 : %s\n", age, name);
//    */
//
//
//    //// 문자열을 출력하는 puts와 fputs 함수
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
//    printf("최초 문자열 : %s\n", str1);
//    strcpy(str1, str2); // strcpy(복사받을곳, 복사할 내용);
//    printf("바뀐 문자열 : %s\n", str1);
//
//    strcpy(str1, ps1);
//    printf("바뀐 문자열 : %s\n", str1);
//
//    strcpy(str1, ps2);
//    printf("바뀐 문자열 : %s\n", str1);
//
//    strcpy(str1, "banana");
//    printf("바뀐 문자열 : %s\n", str1);
//    */
//
//    //char str[20] = "mango tree";
//
//    //strncpy(str, "apple-pie", 5);
//    //// apple만 쓰이도록 하려면 널문자 별도로 저장 // str[5] = '\0':
//    //printf("%s\n", str);
//
//    /*
//    char str[80] = "straw";
//
//    strcat(str, "berry"); // str배열에 문자열 붙이기
//    printf("%s\n", str);
//    strncat(str, "piece", 3); // str 배열에 3개의 문자 붙이기
//    printf("%s\n", str);
//    */
//}



//int main(void)
//{
//    char str1[80], str2[80];
//    char* resp;
//
//    printf("2개의 과일 이름 입력 : ");
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
//    printf("이름이 긴 과일은 : %s\n", resp);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

int main(void)
{
    char str1[80] = "apple";
    char str2[80] = "banana";

    printf("사전에 나중에 나오는 과일 이름 : ");
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