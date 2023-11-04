//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int);

int main(void) {
    int year;
    scanf("%d", &year);

    bool leap = IsLeapYear(year);


    if (leap) {
        printf("this year is leap year\n");
    } else {
        printf("this year is not a leap year\n");
    }
    return 0;
}

bool IsLeapYear(int year) {
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    return leap;
}