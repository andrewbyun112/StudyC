/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, Json �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum _TOKEN_TYPE { // ��ū ���� ������
    TOKEN_STRING, // ���ڿ� ��ū
    TOKEN_NUMBER, // ���� ��ū
} TOKEN_TYPE;

typedef struct _TOKEN { //��ū ����ü
    TOKEN_TYPE type; // ��ū ����
    union { // �� ���� �� �� ������ ������ ���̹Ƿ� ����ü�� ����
        char* string; // ���ڿ� ������
        double numbur; // �Ǽ��� ����
    };
    bool isArray; // ���� ��ū�� �迭���� ǥ��
} TOKEN;

#define TOKEN_COUNT 20 // ��ū�� �ִ� ����

typedef struct _JSON { // JSON ����ü
    TOKEN tokens[TOKEN_COUNT]; // ��ū �迭
} JSON;

char* readFile(char* filename, int* readSize) {
    FILE* fp = fopen(filename, "rb");
    if (fp == NULL) { return NULL; }
    int size; 
    char* buffer;
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    buffer = calloc(1, size + 1);
    
    // ���� ���� ó������ �ۼ�
    if (fread(buffer, size, 1, fp) < 1) {
        *readSize = 0;
        fclose(fp);
        free(buffer);
        return NULL;
    }
    *readSize = size;
    fclose(fp);
    return buffer;
}

void parseJSON(char* doc, int size, JSON* json) {
    int tokenIndex = 0;
    int pos = 0;
    if (doc[pos] != '{') { return; }
    pos++;

    while (pos < size) {
        switch (doc[pos])
        {
        case '"':
        {
            char* begin = doc + pos + 1;
            char* end = strchr(begin, '"');
            if (end == NULL) { break; }

            int stringLength = end - begin;
            json->tokens[tokenIndex].type = TOKEN_STRING;
            json->tokens[tokenIndex].string = calloc(1, stringLength + 1);
            memcpy(json->tokens[tokenIndex].string, begin, stringLength);
            tokenIndex++;
            pos = pos + stringLength + 1;
            break;
        }
        }
        pos++;
    }
}

void freeJSON(JSON* json) {
    for (int i = 0; i < TOKEN_COUNT; i++)    {
        if (json->tokens[i].type == TOKEN_STRING)   {
            free(json->tokens[i].string);
        }
    }
}

// �����Լ�
int main(void) 
{
    int size;
    char* doc = readFile("example.json", &size);
    if (doc == NULL) { return EXIT_FAILURE; }
    JSON json = { 0, };
    parseJSON(doc, size, &json);

    int i = 0;
    while (true) {
        if (json.tokens[i].string == 0) { break; }
        printf("%s: %s\n", json.tokens[i].string, json.tokens[i + 1].string);
        i += 2;
    }

    freeJSON(&json);
    free(doc);

	system("pause");
	return EXIT_SUCCESS;
}