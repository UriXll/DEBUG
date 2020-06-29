#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    char names[100][101];
    char temp[101];

    for (i = 0; i < n + 1; i++) {
        for (j = 0; j < 101; j++) {
            scanf("%c", &names[i][j]);
            if (names[i][j] == '\n') {
                break;
            }
        }
    }

    for (i = 1; i < n + 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (strlen(names[j]) < strlen(names[j + 1])) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("%s\n", names[1]);
    
    return 0;
}
