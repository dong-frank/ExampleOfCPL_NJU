//
// Created by Frank on 2023/10/13.
//
#include<stdio.h>

int main(void) {
    int lines = 0;
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++) {

        for (int j = 0; j < lines - 1 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        if (i < lines - 1) {
            printf("\n");
        }
    }
    return 0;
}