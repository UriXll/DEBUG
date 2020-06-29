﻿#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n = 10;
    int numbers[10];
    int i, j;
    int m;
    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    /*-----------------------------------------------*/
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (numbers[j - 1] < numbers[j]) {
                swap(&numbers[j - 1], &numbers[j]);
            }
        }
    }
    /*-----------------------------------------------*/
    for (m = 0; m < 10; m++) {
        printf("%d", numbers[m]);
        if (m != 9) {
            printf(" ");
        }
    }
    return 0;
}
