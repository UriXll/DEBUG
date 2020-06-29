#include <stdio.h>
#include <string.h>
int main()
{
    char before[100];
    scanf("%s", before);
    char calculate[100][100];
    int i;
    int count = 0;
    int r = 0;
    int w = 0;
    int x = 0;
    while (scanf("%s", calculate[i]) != EOF) {
        count++;
    }
    int result = 0;
    for (i = 0; i < 3; i++) {
        if (before[i] == 'r') {
            result += 4;
            r++;
        }
        if (before[i] == 'w') {
            result += 2;
            w++;
        }
        if (before[i] == 'x') {
            result += 1;
            x++;
        }
    }
    //计算后的结果
    for (i = 0; i < count; i++) {
        if (calculate[i][0] == '+') {
            if (r == 0 && calculate[i][1] == 'r') {
                result += 4;
            }
            if (w == 0 && calculate[i][1] == 'w') {
                result += 2;
            }
            if (x == 0 && calculate[i][1] == 'x') {
                result += 1;
            }
        } else if (calculate[i][0] == '-') {
            if (r == 1 && calculate[i][1] == 'r') {
                result -= 4;
            }
            if (w == 1 && calculate[i][1] == 'w') {
                result -= 2;
            }
            if (x == 1 && calculate[i][1] == 'x') {
                result -= 1;
            }
        }
    }
    printf("%d", result);
    return 0;
}