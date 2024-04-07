//
// Created by Frank on 2023/11/10.
//
#include <stdio.h>

int GCD(int a, int b);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", GCD(a, b));
    return 0;
}

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}