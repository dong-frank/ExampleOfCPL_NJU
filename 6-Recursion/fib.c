//
// Created by Frank on 2023/11/10.
//
//递归展开的子问题很多时速度会明显下降此时应该用迭代
#include <stdio.h>

long long int Fib(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld", Fib(n));
    return 0;
}

long long int Fib(int n) {
    if (n <= 1) {
        return n;
    }

    return Fib(n - 1) + Fib(n - 2);
}