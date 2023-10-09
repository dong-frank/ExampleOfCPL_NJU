//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>

int main(void) {
    int year;
    scanf("%d", &year);

    int leap = 0; //定义一个指示变量，要么为 0要么为 1 bool

    if (year % 4 != 0) {
        leap = 0;
    } else if (year % 100 != 0) {
        leap = 1; //year % 4 ==0 and year % 100 !=0
    } else if (year % 400 != 0) {
        leap = 0;
    } else {
        leap = 1; //year % 4 ==0 and year % 100 ==0 and year % 400 ==0 <=> year % 400 ==0
    }


    if (leap) {
        printf("this year is leap year\n");
    } else {
        printf("this year is not a leap year\n");
    }
    return 0;
}