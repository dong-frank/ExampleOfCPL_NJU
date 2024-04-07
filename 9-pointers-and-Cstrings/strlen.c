//
// Created by Frank on 2023/12/1.
//
//
#include <stdio.h>

int StrLen(const char *s);//const 保护字符串不被修改 (没有保护指针变量 char * const str)

int StrLen1(const char *s);

int StrLen2(const char *s);

//  The behavior is undefined if str is not a pointer to a null-terminated byte string.
size_t StrLenStd(const char *s);

int main() {
    char msg[] = "Hello World!";

    printf("StrLen(%s) = %d\n", msg, StrLen1(msg));
    printf("StrLenStd(%s) = %zu\n", msg, StrLenStd(msg));

    return 0;
}

int StrLen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    return len;
}

int StrLen1(const char *s) {
    int len = 0;
    while (s[len++] != '\0');
//  当s[len++]=='\0'时len还会++
    return len - 1;
}

int StrLen2(const char *s) {
    int len = -1;
    while (s[++len] != '\0');

    return len;
}

size_t StrLenStd(const char *s) {
    const char *sc;
    for (sc = s; *sc != '\0'; sc++);
//  两个指针的减法
    return sc - s;
}