#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i, j;

    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (numbers[i] < numbers[j]) {
                swap(&numbers[i], &numbers[j]);
            }
        }
    }

    for (m = 0; m < 10; m++) {
        if (m != 9) {
            printf("%d ", numbers[m]);
        }
        else {
            printf("%d", numbers[m]);
        }
    }

    return 0;
}