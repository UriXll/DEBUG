#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    int start = 0, column = n, row = m;
    int count = 1;
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    while (start < column && start < row) {
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                if (i == m - 1) {
                    if (count <= m * n) {
                        printf("%d", matrix[i][0]);
                        count++;
                    }
                } else if (count <= m * n) {
                    printf("%d ", matrix[i][0]);
                    count++;
                }
            }
        } else if (m == 1) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    if (count <= m * n) {
                        printf("%d", matrix[0][j]);
                        count++;
                    }
                } else if (count <= m * n) {
                    printf("%d ", matrix[0][j]);
                    count++;
                }
            }
        } else {
              for (int j = start; j < column; j++) {
                  if (start + 1 == row && column - 1 == j) {
                      if (count <= m * n) {
                          printf("%d", matrix[start][j]);
                          count++;
                      }
                      break;
                  } else if (count <= m * n) {
                        printf("%d ", matrix[start][j]);
                        count++;
                    }
              }

              for (int i = start + 1; i < row; i++) {
                  if (i + 1 == row && column - 2 == start) {
                      if (count <= m * n) {
                          printf("%d ", matrix[i][column - 1]);
                          count++;
                      }
                      break;
                  } else if (count <= m * n) {
                        printf("%d ", matrix[i][column - 1]);
                        count++;
                    }
              }
              for (int j = column - 2; j >= start; j--) {
                  if (row - 2 == start && j == start) {
                      if (count <= m * n) {
                          printf("%d", matrix[row - 1][j]);
                          count++;
                      }
                      break;
                  } else if (count <= m * n) {
                        printf("%d ", matrix[row - 1][j]);
                        count++;
                  }
                  if (count > m * n) {
                      break;
                  }
              }
              for (int i = row - 2; i > start; i--) {
                  if (i == start + 1 && start + 1 == column - 1) {
                      if (count <= m * n) {
                          printf("%d", matrix[i][start]);
                          count++;
                      }
                      break;
                } else if (count <= m * n) {
                      printf("%d ", matrix[i][start]);
                      count++;
                  }
              }
          }
          start++;
          column--;
          row--;
    }

    return 0;
}
