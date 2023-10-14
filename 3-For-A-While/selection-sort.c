//
// Created by Frank on 2023/10/13.
//
#include <stdio.h>

#define LEN 20

int main(void) {
    int number[LEN];
    int len = 0;
    while (scanf("%d", &number[len++]) != EOF) { ;
    }//用户来输入数据
    for (int i = 0; i < len; i++) {
        printf("%d", number[i]);
    }

    for (int i = 0; i < len; i++) {
        int min = number[i];
        int min_index = i;
        for (int j = i + 1; j < len; j++) {
            if (min > number[j]) {
                min = number[j];
                min_index = j;
            }
        }
        int temp = number[min_index];
        number[min_index] = number[i];
        number[i] = temp;
    }
    for (int i = 0; i < len; i++) {
        printf("%d", number[i]);
    }
    return 0;
}