//
// Created by Frank on 2023/11/10.
//
#include <stdio.h>

#define NUM 10

int BinarySearch(int key, const int dict[], int low, int high);

int main(void) {
    int dictionary[NUM] = {0, 1, 1, 2, 3, 5, 7, 9, 12, 15};
    int key = 0;
    scanf("%d", &key);
    printf("%d", BinarySearch(key, dictionary, 0, NUM - 1));

    return 0;
}

int BinarySearch(int key, const int dict[], int low, int high) {
    if (low == high) {
        if (dict[low] == key) {
            return low;
        } else {
            return -1;
        }
    }
    //if(low>high){
    //  return -1;
    //}基础情况的选择有很多种
    int mid = (low + high) / 2;
    if (dict[mid] == key) {
        return mid;
    }
    if (dict[mid] > key) {
        return BinarySearch(key, dict, low, mid - 1);
    }
    return BinarySearch(key, dict, mid + 1, high);
}