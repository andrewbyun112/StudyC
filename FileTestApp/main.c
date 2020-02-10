/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 파일 오픈 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 메인함수
//int main(void) 
//{
//    FILE* fp;
//    char str[] = "banana";
//    int ch;
//    int i=0;
//
//    fp = fopen("b.txt", "w");
//    if (fp == NULL)
//    {
//        printf("파일 생성 실패.\n");
//        return EXIT_FAILURE;
//    }
//    while (str[i] != '\0')
//    {
//        fputc(str[i], fp);
//        i++;
//    }
//    fputc('\n', fp);
//    fclose(fp);

//int main(void)
//{
//
//    /*int ch;
//
//    while (1)
//    {
//        ch = fgetc(stdin);
//        if (ch == EOF) break;
//        fputc(ch, stdout);
//    }*/
//
//    /*FILE* fp;
//    int ary[10] = { 65,66,67,68,26,70,71,72,73,74 };
//    int i, res;
//
//    fp = fopen("c.txt", "wb");
//    for (int i = 0; i < 10; i++)
//    {
//        fputc(ary[i], fp);
//    }
//    fclose(fp);
//
//    fp = fopen("c.txt", "rt");
//    while (1)
//    {
//        res = fgetc(fp);
//        if (res == EOF) break;
//        printf("%4c", res);
//    }
//    printf("\n");
//    fclose(fp);
//
//	system("pause");
//	return EXIT_SUCCESS;*/
//
//    FILE* fp;
//    char str[20];
//
//    fp = fopen("d.txt", "a+");
//    if (fp == NULL)
//    {
//        printf("파일을 만들지 못했습니다.\n");
//        return 1;
//    }
//
//    while (1)
//    {
//        printf("과일이름 : ");
//        scanf("%s", str);
//        if (strcmp(str, "end") == 0) { break; }
//        else if (strcmp(str, "list") == 0)
//        {
//            fseek(fp, 0, SEEK_SET);
//            while (1)
//            {
//                fgets(str, sizeof(str), fp);
//                if (feof(fp)) 
//                { break; }
//                printf("%s", str);
//            }
//        }
//        else
//        {
//            fprintf(fp, "%s\n", str);
//        }
//    }
//    fclose(fp);
//
//    return 0;
//}


int main(void)
{
    FILE* afp, * bfp;
    int num = 213456;
    int res;

    afp = fopen("a.txt", "wt");
    if (afp == NULL) { return 1; };
    fprintf(afp, "%d", num);

    bfp = fopen("b.txt", "wb");
    if (bfp == NULL) { return 1; };
    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b.txt", "rb");
    if (bfp == NULL) { return 1; };
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);
    return 0;
}