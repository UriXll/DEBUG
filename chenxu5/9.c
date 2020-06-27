#include <stdio.h>
#include <string.h>
int main() {
    int i, j;
    char name[10][20];
    char temp[20];
    for (i = 0, j = 0; i < 10; i++) {
        scanf("%s", &name[i][j]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(&name[i][0], &name[j][0]) > 0) {
                strcpy(temp, &name[j][0]);
                strcpy(&name[j][0], &name[i][0]);
                strcpy(&name[i][0], &temp);
            }
        }
    }

    for (i = 0, j = 0; i < 10; i++) {
        printf("%s\n", &name[i][j]);
    }

    return 0;
}
