//
// Created by Frank on 2023/10/13.
//
#include <stdio.h>

#define LEN 10


int BinarySearch(int key, const int dict[], int len);

int main(void) {
    int key = 0;
    int diction[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    scanf("%d", &key);
    int index = BinarySearch(key, diction, LEN);
    if (index == -1) {
        printf("no found");
    } else {
        printf("found it");
    }
    return 0;
}

int BinarySearch(int key, const int dict[], int len) {
    int low = 0;
    int high = len - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (key > dict[mid]) {
            low = mid + 1;
        } else if (key < dict[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }

    }
    return -1;
}