//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>

int main(void) {
    int year;
    int leap = 0;
    scanf("%d", &year);

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);


    if (leap) {
        printf("this year is leap year\n");
    } else {
        printf("this year is not a leap year\n");
    }
    return 0;
}