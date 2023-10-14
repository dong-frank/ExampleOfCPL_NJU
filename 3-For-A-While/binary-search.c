//
// Created by Frank on 2023/10/13.
//
#include <stdio.h>

#define LEN 10

int main(void) {
    int key = 0;
    int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    scanf("%d", &key);
    int index = -1;
    int low = 0;
    int high = LEN - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (key > dict[mid]) {
            low = mid + 1;
        } else if (key < dict[mid]) {
            high = mid - 1;
        } else {
            index = mid;
            //break;
            high = mid - 1;//找最左边的k
        }
    }
    printf("%d", index);
    return 0;
}