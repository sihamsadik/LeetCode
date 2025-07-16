#include <stdio.h>

void printArray(int* arr, int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}


void sort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }

    sort(nums1, m + n);
}
