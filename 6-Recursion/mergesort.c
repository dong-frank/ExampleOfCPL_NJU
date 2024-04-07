//
// Created by Frank on 2023/11/17.
//
#include <stdio.h>

#define LEN 7

/**
 *
 * @param nums
 * @param right
 * @param left
 */
void MergeSort(int nums[], int left, int right);

/**
 * merge nums[left...mid] and nums[mid+1...right]
 * @param nums
 * @param left
 * @param mid
 * @param right
 */
void Merge(int nums[], int left, int mid, int right);

int main(void) {
    int numbers[LEN] = {38, 27, 43, 3, 9, 82, 16};

    MergeSort(numbers, 0, LEN - 1);
    for (int i = 0; i < LEN; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void MergeSort(int nums[], int left, int right) {
    if (right == left) { //对应只有一个元素的最小子问题
        return;
    }
    int mid = (right + left) / 2;
    MergeSort(nums, left, mid);
    MergeSort(nums, mid + 1, right);
    Merge(nums, left, mid, right);
}

void Merge(int nums[], int left, int mid, int right) {
    static int copy[LEN] = {0};
    int left_index = left;
    int right_index = mid + 1;
    int copy_index = left;
    while (left_index <= mid && right_index <= right) {
        if (nums[left_index] <= nums[right_index]) {
            copy[copy_index] = nums[left_index];
            left_index++;
            copy_index++;
        } else {
            copy[copy_index] = nums[right_index];
            right_index++;
            copy_index++;
        }
    }
    while (right_index <= right) {
        copy[copy_index] = nums[right_index];
        right_index++;
        copy_index++;
    }
    while (left_index <= mid) {
        copy[copy_index] = nums[left_index];
        left_index++;
        copy_index++;
    }
    for (int i = left; i <= right; i++) {
        nums[i] = copy[i];
    }
}