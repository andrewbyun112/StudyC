#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char fruit[20] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("���� ´: %s %s\n\n", fruit, "jam");
	//char �迭�� ���ڿ� ����
	strcpy(fruit, "water melons");
	printf("�̹� ���� : %s\n\n", fruit);
	//char �迭�� ���ڿ� ����

	char grade;
	char name[20];

	printf("������ �Է��ϼ��� : ");
	scanf("%c", &grade);
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);

	printf("%s�� ���� : %c\n\n", name, grade);
	
	system("pause");

	return 0;
}
