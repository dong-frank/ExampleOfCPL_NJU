//
// Created by Frank on 2023/12/1.
//
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // it is actually char msg[] = { 'H', 'e', ..., '\0' };
    char msg[] = "Hello World!"; //放在栈帧中可以修改
    printf("%s\n", msg);

    // array name is read-only
    // msg = "Hello";

    msg[0] = 'N';
    printf("%s\n", msg);

    // string literal;
    // may be stored in read-only memory
    char *ptr_msg = "Hello World!"; //放在只读区域
    //如果修改导致
    // undefined behavior

    // On Linux (or Debug mode on Windows): interrupted by signal 11: SIGSEGV
    // SIG: signal; SEGV: segmentation violation

    // On Windows: Process finished with exit code -1073741819 (0xC0000005)
    // See https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-erref/596a1078-e883-4972-9bbc-49e60bebca55
    ptr_msg[0] = 'N';
    printf("%s\n", msg);

    // using malloc
    char *malloc_msg = malloc(20);
    malloc_msg = "Hello World!";
    malloc_msg[0] = 'N';


    return 0;
}