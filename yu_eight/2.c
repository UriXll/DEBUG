#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char** names = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        names[i] = (char*)malloc(sizeof(char) * 101);
    }
    char max[101];

    for (int i = 0; i < n; i++) {
        gets(names[i]);
    }

    strcpy(max, names[0]);
    for (int i = 0; i < n; i++) {
        if (strlen(names[i]) > strlen(max)) {
            strcpy(max, names[i]);
        }
    }


    printf("%s\n", max);
    return 0;
}

