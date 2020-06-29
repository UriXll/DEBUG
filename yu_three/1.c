#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int matrix[100][100];
    int m, n;
    int i, j;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int x = 0;
    int temp;
    while (m - x > 1 && n - x > 1) {
        for (temp = 0; temp < n - 1 - x; temp++) {
            if (x == m / 2 && (temp + x) == n / 2) {
                printf("%d ", matrix[x][temp + x]);
                return 0;
            } else {
                printf("%d ", matrix[x][temp + x]);
              }
        }
        for (temp = 0; temp < m - 1 - x; temp++) {
            printf("%d ", matrix[temp + x][n - 1 - x]);
        }
        for (temp = 0; temp < n - 1 - x; temp++) {
            printf("%d ", matrix[m - 1 - x][n - 1 - temp - x]);
        }
        for (temp = 0; temp < m - 1 - x; temp++) {
            printf("%d ", matrix[m - 1 - temp - x][x]);
        }
        x++;
    }
    return 0;
}
