//
// Created by Frank on 2023/11/10.
//
#include <stdio.h>

int Sum(const int nums[], int len);

int main(void) {
    const int numbers[] = {1, 2, 3, 4, 5};
    int sum = Sum(numbers, sizeof numbers / sizeof numbers[0]);
    printf("%d\n", sum);
    return 0;
}

int Sum(const int nums[], int len) {
    if (len == 0) {
        return 0;
    }
    int partial_sum = Sum(nums, len - 1);
    return partial_sum + nums[len - 1]; //前n-1个元素和+第n个元素
}