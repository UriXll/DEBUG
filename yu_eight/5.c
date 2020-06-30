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
        name[i] = (char*)malloc(sizeof(char) * 100);
    }

    //读入所有的名字到数组的各个行
    for (int i = 0; i < n; i++) {
        gets(name[i]);
    }

    //找出最长的名字
    char name_max[100];

    strcpy(name_max, name[0]);

    for (int i = 1; i < n; i++) {
        if (strlen(name_max) < strlen(name[i]))
            strcpy(name_max, name[i]);
    }

    printf("%s", name_max);

    return 0;
