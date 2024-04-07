//
// Created by Frank on 2023/12/22.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

typedef enum gender {
    MALE,
    FEMALE,
} Gender;
typedef struct score {
    int c_score;//4
    int java_score;//4
    int python_score;//4
} Score;
//tag
//member
//field
typedef struct musician {
    char *name;//8 bytes
    Gender gender;//1 byte

    char *album;//8
    Score score;
} Musician;

void Print(const Musician *m);

int Comp(const void *, const void *);

int main() {
    printf("sizeof Musician = %zu\n", sizeof(Musician));//40!=8+1+8+4+4+4
    struct musician luo = {
            .name= "Luo Dayou",
            .gender= MALE,
            .album="ZhiHuZheYe",
            .score.c_score=0,
            .score.java_score=10,
            .score.python_score=20,
    };
    char album[] = "yikeyaogundexin";
    struct musician cui = {
            .name="Cui Jian",
            .gender=MALE,
            .album=album,
            .score={.c_score=0,
                    .java_score=10,
                    .python_score=20,}
    };
    struct musician zhang = {
            .name="Zhang Chu",
            .gender=MALE,
            .album=album,
            .score={.c_score=0,
                    .java_score=10,
                    .python_score=20,}
    };
    Print(&zhang);
    Musician guo = zhang;
    guo.name = "Guo";
    strcpy(guo.album, "yikemeisudexin");
    Print(&guo);
    Print(&zhang);

    Musician musician[] = {luo, cui, zhang};
    int len = sizeof musician / sizeof *musician;
    qsort(musician, len, sizeof *musician, Comp);
    for (int i = 0; i < len; i++) {
        Print(&musician[i]);
    }
    return 0;
}

void Print(const Musician *m) {
    printf("%s\t%c\t%s\t%d\t%d\t%d\n", m->name, (*m).gender, (*m).album,
           (*m).score.c_score, (*m).score.java_score,
           (*m).score.python_score);
}

int Comp(const void *a, const void *b) {
    const Musician *left_musician = a;
    const Musician *right_musician = b;
    return strcmp(left_musician->name, right_musician->name);
// another method
//    const char *const *left_name=a;
//    const char *const *right_name=b;//转换为了指向第一个成员的指针,刚好第一个成员是name
//
//    return strcmp(*left_name,*right_name);//填充不会在成员的开头填充，保证了首地址不变
}
