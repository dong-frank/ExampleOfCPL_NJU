//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>
#define NUM 5 //定义 NUM 可以用5替换 发生在编译时
int main(void) {
    // int[] int型数组
    //int[5] 和 int[3] 类型不同
    //const int NUM = 5;
    // numbers 已经变成 VLA：可变长数组
    int numbers[NUM] = {1968, 1961, 1969, 1954, 1969};// 声明数组需要在中括号里写明数组大小
    int min = numbers[0];

    for (int i = 1; i < NUM; i++) {
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    printf("%d", min);

    return 0;
}