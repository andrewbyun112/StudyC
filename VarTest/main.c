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
	
	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n\n", lln);
	
	//unsigned를 잘못 사용한 경우
	unsigned int ui = 4294967295;
	printf("unsigned형 최대값 : %d\n", ui);
	ui = -1;
	printf("unsigned형 현재값 : %u\n\n", ui);

	//유효 숫자 확인
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);

	system("pause");

	return 0;
}