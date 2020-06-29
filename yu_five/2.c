#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp[21];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main() {
    int i, j, k, l;
    char name[10][21];
    char temp;
    for (i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }
    for (j = 0; j < 10; j++) {
        for (k = 0; k < 9 - j; k++) {
            if (strcmp(name[k], name[k + 1]) >= 0) {
                swap(name[k], name[k + 1]);
            }
        }
    }
    int m;
    for (m = 0; m < 10; m++) {
        printf("%s", name[m]);
        if (m != 9) {
            printf("\n");
        }
    }

    return 0;
}