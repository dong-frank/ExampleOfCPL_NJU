//
// Created by Frank on 2023/11/10.
//
#include <stdio.h>

#define NUM 3
const int numbers[NUM] = {65, 28, 37};

int Min(const int nums[], int len);

int main(void) {
    printf("%d", Min(numbers, NUM));
    return 0;
}

int Min(const int nums[], int len) {
    if (len == 1) {
        return nums[0]; //最小问题的解
    }

    int partial_min = Min(nums, len - 1);//子问题

    return partial_min < nums[len - 1] ? partial_min : nums[len - 1];//由子问题得到原始问题
}