#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);
    int a[51];

    if (n <= 4) {
        printf("1");
    }
    if (n > 3) {
        a[1] = 0;
        a[2] = 1;
        a[3] = 1;
        a[4] = 1;

        for (i = 5; i < n; i++) {
            a[i] = a[i - 2] + a[i - 3];
        }
        printf("%d", a[i - 2] + a[i - 3]);
    }
    
    return 0;
}
