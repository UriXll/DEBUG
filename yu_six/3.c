#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    int counter = 0;
    char temp[10][3];
    char name[3];
    int r, w, x;
    r = 0;
    w = 0;
    x = 0;
    while (scanf("%s", name) != EOF) {
        strcpy(temp[i], name);
        i++;
    }

    for (int j = 0; j < 3; j++) {
        if ((temp[0][j] == 'w')) {
            w++;
        } else if ((temp[0][j] == 'r')) {
            r++;
        } else if ((temp[0][j] == 'x')) {
            x++;
        }
    }
    for (int a = 0; a < 10; a++) {
        if ((temp[a][0] == '+' && temp[a][1] == 'r')) {
            if (r == 0) {
                r++;
            }
        } else if ((temp[a][0] == '+' && temp[a][1] == 'w')) {
            if (w == 0) {
                w++;
            }
        } else if ((temp[a][0] == '+' && temp[a][1] == 'x')) {
            if (x == 0) {
                x++;
            }
        } else if ((temp[a][0] == '-' && temp[a][1] == 'r')) {
            if (r == 1) {
                r--;
            }
        } else if ((temp[a][0] == '-' && temp[a][1] == 'w')) {
            if (w == 1) {
                w--;
            }
        } else if ((temp[a][0] == '-' && temp[a][1] == 'x')) {
            if (x == 1) {
                x--;
            }
        }
    }
    counter = r * 4 + w * 2 + x;
    printf("%d", counter);
    return 0;
}
