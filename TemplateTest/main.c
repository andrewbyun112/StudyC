#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h> //�ý��� �������

/*
�����Լ�
*/
int main(void)
{
	printf("%d\n" , 100);
	printf("%lf\n" , 3.14);
	printf("%.1lf\n" , 3.141592); //�Ҽ��� 1��°�ڸ����� ���
	printf("%.10lf\n" , 3.141592); //�Ҽ��� 10��°�ڸ����� ���
	printf("%.1lf + %.1lf = %.1lf\n", 10.2, 3.4, 10.2 + 3.4);

	printf("%d�� %d�� ���� %d�Դϴ�.\n" , 10 , 20 , 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	system("pause");
	return 0;
}
