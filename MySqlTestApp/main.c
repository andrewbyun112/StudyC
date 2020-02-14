/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, MySql ���� �׽�Ʈ
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <my_global.h>
#include <WinSock2.h>
#include <mysql.h>

#pragma comment(lib, "libmysql.lib")

#define MYSQLUSER "root"
#define MYSQLPASSWORD "mysql_p@ssw0rd"
#define MYSQLIP "localhost"

void loadmysql(char mysqlip[], MYSQL* conn);

// �����Լ�
int main(void) 
{
    //printf("MySQL info is %s\n", mysql_get_client_info());

    MYSQL* conn = mysql_init(NULL);
    MYSQL_RES* res;
    MYSQL_ROW row;
    int fields;

    loadmysql(MYSQLIP, conn);
    printf("\n");
    mysql_query(conn, "use shopdb;");
    mysql_query(conn, "SELECT * FROM membertbl;");
    res = mysql_store_result(conn);
    fields = mysql_num_fields(res);

    while (row = mysql_fetch_row(res))
    { // �� ������ �Ѹ��� ���� ����
        for (int i = 0; i < fields; i++)
        {
            printf("%s", row[i]);
            if (i<fields)
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    mysql_free_result(res);
    mysql_close(conn);

	system("pause");
	return EXIT_SUCCESS;
}

void loadmysql(char mysqlip[], MYSQL* conn)
{
    if (conn == NULL) // conn�� �ʱ�ȭ�� ��������
    {
        fprintf(stderr, "%s\n", mysql_error(conn)); // ���� ����Ʈ, 
        Sleep(1000); // ���� ���ڸ�ŭ ���μ��� ����, 1000ms����(1��)
        exit(EXIT_FAILURE);
    }
    if (mysql_real_connect(conn, mysqlip, MYSQLUSER, MYSQLPASSWORD,
            NULL, 0, NULL, 0) != NULL)
    { // mysql������ ���� �����ϸ� 0 �ƴϸ� �ٸ��� ��ȯ
        printf("���� ����\n");
        mysql_set_character_set(conn, "euckr");
    }
    else
    {
        fprintf(stderr, "���� ���� : %s\n", mysql_error(conn));
        getchar();
    }
}