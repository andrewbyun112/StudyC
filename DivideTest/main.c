#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//double apple;
	//int banana;
	//int orange;

	//apple = 5.0 / 2.0;
	//banana = 5 / 2;
	//orange = 5 % 2;

	//printf("apple : %.1f\n", apple);
	//printf("banana : %d\n", banana);
	//printf("orange : %d\n\n", orange);
	////몫과 나머지

	//int a = 5, b = 5;
	//int pre, post;

	//pre = (++a) * 4;
	//post = (b++) * 4;

	//printf("초깃값 a = %d, b = %d\n", a, b);
	//printf("전위형 : (++a) * 4 = %d, 후위형 : (b++) * 4 =%d\n", pre, post);
	////++a는 6으로 계산, b++은 5로 계산됨
	////전위 표기와 후위 표기를 사용한 증감 연산
	
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a>10) && (a<20) : %d\n", res);
	res = (a > 10) || (a < 20);
	printf("(a<10) || (a>20) : %d\n", res);
	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res);
	//관계,논리연산자


	//형변환연산자
	system("pause");

	return 0;
}