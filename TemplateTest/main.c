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
	printf("%d과 %d의 합은 %d입니다.\n\n" , 10 , 20 , 10 + 20);
	
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	printf("%lf\n", 1e10);
	printf("%.8lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n\n", 0.0000314);
	
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s 입니다.\n", '1', "first"); //문자는 '', 문자열은 ""
	printf("%d\n", 'A'); //A를 숫자로 나타내면 65 (아스키코드)


	system("pause");
	return 0;
}
