#include <stdio.h>
#include <string.h>

void swap(char **b, char **c)
{
    char *temp = (char *)malloc(31);
    temp = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    char name[20][31];
    int i;
    int j;
    int m = 10;

    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);
    }

    for (j = 0; j < m; j++) {
        for (i = j + 1; i < m; i++) {
            if (strcmp(name[j], name[i]) > 0) {
                swap(&name[j], &name[i]);
            }
        }
    }

    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]);
    }
    
    return 0;
}
