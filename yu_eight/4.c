#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char** name = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        name[i] = (char*)malloc(sizeof(char) * 101);
    }
    char temp[100];


    for (int i = 0; i < n; i++) {
        gets(name[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n - 1 - j; k++) {
            if ((strlen(name[k]) < strlen(name[k + 1]))) {
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
            }
        }
    }
    printf("%s", name[0]);
    return 0;
}
