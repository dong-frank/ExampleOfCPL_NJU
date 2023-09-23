//
// Created by Frank on 2023/9/22.
//
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main (void){
    //声明两个字符串
    char first_name[] = "Dayou";
    char last_name[] = "Luo";

    const int UP = 'a'-'A';
    char gender = 'm';
    char upword_gender = gender - UP ;

    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;

    char weekday[] = "Tuesday";

    int c_score = 30;
    int music_score = 100;
    int medicine_score = 85;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean, 2))+(pow(music_score - mean, 2))+
            pow(medicine_score - mean , 2));


    int rank = 5;

    printf("%s \t %s\t %c\n",first_name,last_name,toupper(gender));
    //.2d:最少的输出位数
    printf("%.2d--%d--%d \t %.3s.\n",birth_month,birth_day,birth_year,weekday);
    printf("%d \t %d \t %d \t\n",c_score,music_score,medicine_score);
    printf("%.2f \t %.2f \t",mean,sd);
    printf("%d%%\n",rank);
    printf("upword_gender=%c",upword_gender);

    return 0;
}


