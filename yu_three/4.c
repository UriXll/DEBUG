#include <stdio.h>

void space(int, int);

int main() {
    int matrix[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    int mix = ((m >= n) ? n : m);
    int opration = 2 * mix - 1 + (m > n);//Operation direction description variable
    int i, j;
    int a;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int counter = 0;
    for (i = 1; i <= opration; i++) {
        switch (i % 4) {
        case 1:
            for (a = (i / 4); a < (n - i / 4); a++) {
                printf("%d", matrix[i / 4][a]);
                space(++counter, m * n);
            }break;
        case 2:
            for (a = (i / 4 + 1); a < (m - i / 4); a++) {
                printf("%d", matrix[a][n - i / 4 - 1]);
                space(++counter, m * n);
            }break;
        case 3:
            for (a = (i / 4 + 1); a < (n - i / 4); a++) {
                printf("%d", matrix[m - i / 4 - 1][n - a - 1]);
                counter++;
                space(++counter, m * n);
            }break;
        case 0:
            for (a = (i / 4); a <= (n - i / 4 + 1); a++) {
                printf("%d", matrix[m - a - 1][i / 4 - 1]);
                counter++;
                space(++counter, m * n);
            }break;
        }
    }
    return 0;
}
void space(int a, int b) {
    if (a != b) {
        printf(" ");
    }
}