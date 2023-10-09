//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>
#define NUM 5
int main(void){
    int numbers[NUM] ={0};// 初始化全为0
    int min =numbers[0];

    for(int i = 0;i < NUM;i++){ // i起到计数的作用
        scanf("%d",&numbers[i]); //numbers[i] 当作变量使用
    }

    for (int i = 1; i < NUM; i++) { // 初始化只作用在for循环内部（作用域），可重复申明 int i
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    printf("%d", min);

    return 0;
}