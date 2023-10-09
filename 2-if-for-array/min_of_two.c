//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>

int main(void){
    int a =0;
    int b =0;

    scanf("%d%d",&a,&b);

    int min =0;

    if (a < b) {
        min = a;
    }
    else {
        min = b;
    }
    /*
     * min = a < b ? a : b; 三元运算符
     */
    printf("min(%d,%d) = %d \n",a,b,min);

    return 0;
}