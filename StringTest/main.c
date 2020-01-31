#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기 쨈: %s %s\n\n", fruit, "jam");
	//char 배열에 문자열 저장
	strcpy(fruit, "water melons");
	printf("이번 과일 : %s\n\n", fruit);
	//char 배열에 문자열 복사

	char grade;
	char name[20];

	printf("학점을 입력하세요 : ");
	scanf("%c", &grade);
	printf("이름을 입력하세요 : ");
	scanf("%s", &name);

	printf("%s의 학점 : %c\n\n", name, grade);
	
	system("pause");

	return 0;
}
