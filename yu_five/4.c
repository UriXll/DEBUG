#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char names[10][21];
    char name[21];
    int i, j;
    for (i = 0; i < 10; i++) {
        memset(name, 0, sizeof(name));
        scanf("%s", name);
        getchar();
        for (j = 0; j < strlen(name); j++) {
            names[i][j] = name[j];
        }
        names[i][j] = '\0';
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(names[j], names[j + 1]) >= 0) {
                char temp[21];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%s", names[i]);
        if (i != 9) {
            printf("\n");
        }
    }

    return 0;
}