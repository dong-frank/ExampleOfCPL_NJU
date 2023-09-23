//
// Created by Frank on 2023/9/22.
//
#include <stdio.h>

int main(void){
    // 声明常量约定全部为大写
    const double PI =3.14159;
    int radius =10;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    // %d: decimal
    printf("radius= %d\n",radius);
    // %.2: precious 小数点后2位，默认6位
    printf("circumference= %.2f\n area= %.2f\n",circumference,area);



    return 0;


}