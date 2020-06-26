#include <stdio.h>
#include <string.h>
int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m, n;
    int i, j, k;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    int** m3 = (int**)malloc(sizeof(int*) * m);
    for (i = 0; i < m; i++) {
        m3[i] = (int*)malloc(sizeof(int) * m);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            m3[i][j] = 0;
        }
    }

    //������� ����m3
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                m3[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", m3[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}