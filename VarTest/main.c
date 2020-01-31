#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER


#include <stdio.h>
#include <stdlib.h>

int main()
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;
	
	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n\n", lln);
	
	//unsigned�� �߸� ����� ���
	unsigned int ui = 4294967295;
	printf("unsigned�� �ִ밪 : %d\n", ui);
	ui = -1;
	printf("unsigned�� ���簪 : %u\n\n", ui);

	//��ȿ ���� Ȯ��
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);

	system("pause");

	return 0;
}