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
	printf("%d�� %d�� ���� %d�Դϴ�.\n\n" , 10 , 20 , 10 + 20);
	
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
	printf("%lf\n", 1e10);
	printf("%.8lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n\n", 0.0000314);
	
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c�� %s �Դϴ�.\n", '1', "first"); //���ڴ� '', ���ڿ��� ""
	printf("%d\n", 'A'); //A�� ���ڷ� ��Ÿ���� 65 (�ƽ�Ű�ڵ�)


	system("pause");
	return 0;
}
