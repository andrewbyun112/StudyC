/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, Json 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.12
  writer - Andrewbyun
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum _TOKEN_TYPE { // 토큰 종류 열거형
    TOKEN_STRING, // 문자열 토큰
    TOKEN_NUMBER, // 숫자 토큰
} TOKEN_TYPE;

typedef struct _TOKEN { //토큰 구조체
    TOKEN_TYPE type; // 토큰 종류
    union { // 두 종류 중 한 종류만 저장할 것이므로 공용체로 만듦
        char* string; // 문자열 포인터
        double numbur; // 실수형 숫자
    };
    bool isArray; // 현재 토큰이 배열인지 표시
} TOKEN;

#define TOKEN_COUNT 20 // 토큰의 최대 개수

typedef struct _JSON { // JSON 구조체
    TOKEN tokens[TOKEN_COUNT]; // 토큰 배열
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
    
    // 읽은 버퍼 처리로직 작성
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

// 메인함수
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