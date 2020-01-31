#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h> //시스템 헤더파일

/*
메인함수
*/
int main(void)
{
	printf("%d\n" , 100);
	printf("%lf\n" , 3.14);
	printf("%.1lf\n" , 3.141592); //소수점 1번째자리까지 출력
	printf("%.10lf\n" , 3.141592); //소수점 10번째자리까지 출력
	printf("%.1lf + %.1lf = %.1lf\n", 10.2, 3.4, 10.2 + 3.4);

	printf("%d과 %d의 합은 %d입니다.\n" , 10 , 20 , 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	system("pause");
	return 0;
}
