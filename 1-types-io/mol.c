//
// Created by Frank on 2023/9/22.
//
#include <stdio.h>
int main (void){
    const double MOL = 6.02e23;
    const int GRAM_PRE_MOL = 32;

    int mass = 6;

    double quantity = ((mass *1.0) / GRAM_PRE_MOL) * MOL;
    // e:科学计数法
    // g:保留位数
    printf("quantity = %.3e\nquantity = %.5g",quantity,quantity);

    return 0;
}