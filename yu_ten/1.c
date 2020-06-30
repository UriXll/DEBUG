#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    if (a >= 2) {
        printf("2\n");
    }
    for (d = 3; d <= a; d += 1) {
        for (b = 2; b < d; b += 1) {
            c = 0;
            if (d % b == 0) {
                c += 1;
                break;
            }
        }
        if (c == 1) {
            continue;
        }
        printf("%d\n", d);
    }

    return 0;
}