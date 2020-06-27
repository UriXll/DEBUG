#include <stdio.h>
#include <string.h>

int main()
{
    char string[10][21];
    char str[21];
    int i, j;

    for (i = 0; i < 10; i++) {
        scanf("%s", &string[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            if (strcmp(string[i], string[j]) > 0) {
                strcpy(str, string[j]);
                strcpy(string[j], string[i]);
                strcpy(string[i], str);
            }
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 21; j++) {
            if (string[i][j] == '\0') {
                printf("\n");
                break;
            } else {
                  printf("%c", string[i][j]);
              }
        }
    } 
    
    return 0;
}
