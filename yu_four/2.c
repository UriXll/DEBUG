#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int n = 10;
    int* numbers = (int*)malloc(sizeof(int) * n);
    int i, j;
    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (numbers[j - 1] < numbers[j]) {
                swap(&numbers[j - 1], &numbers[j]);
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    return 0;
}