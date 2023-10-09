//
// Created by Frank on 2023/10/8.
//
#include <stdio.h>

int main(void){
    int a;
    int b;
    int c;

    scanf("%d%d%d",&a,&b,&c);

    int min;
    if(a > b ){
        if(b > c){
            min = c;
        }
        else{
            min = b;
        }
    }
    else{ // a<=b
        if(a > c){
            min = c;
        }
        else{
            min = a;
        }
    }
    printf("min(%d,%d,%d) = %d \n",a,b,c,min);

    return 0;
}
