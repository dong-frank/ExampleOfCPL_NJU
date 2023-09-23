//
// Created by Frank on 2023/9/22.
//
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main (void){
    char first_name[10];
    char last_name[10];

    const int UP = 'a'-'A';
    char gender;


    int birth_year;
    int birth_month;
    int birth_day;

    char weekday[10];

    int c_score;
    int music_score;
    int medicine_score;


    double mean;
    double sd;

    int rank;
    //数组类型变量本身就表示数组的地址
    scanf("%9s%9s %c "
          "%d%d%d"
          "%9s"
          "%d%d%d"
          "%lf%lf %d%%",first_name,last_name,&gender,
          &birth_year,&birth_month,&birth_day,weekday,&c_score,
          &music_score,&medicine_score,&mean,&sd,&rank);





    printf("%s \t %s\t %c\n",first_name,last_name,toupper(gender));
    //.2d:最少的输出位数
    printf("%.2d--%d--%d \t %.3s.\n",birth_month,birth_day,birth_year,weekday);
    printf("%d \t %d \t %d \t\n",c_score,music_score,medicine_score);
    printf("%.2f \t %.2f \t",mean,sd);
    printf("%d%%\n",rank);


    return 0;
}