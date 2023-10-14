//
// Created by Frank on 2023/10/13.
//
#include <stdio.h>

int main(void) {
    int number = 0;
    scanf("%d", &number);
    int num_of_digits = 0;
    do {
        number /= 10;
        num_of_digits++;
    } while (number > 0);
    
    printf("%d", num_of_digits);
    return 0;
}