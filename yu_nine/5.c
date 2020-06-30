#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    scanf("%d", &N);
    int* part = (int*)malloc(sizeof(int) * N);
    part[1] = 0;
    part[2] = 1;
    part[3] = 1;
    part[4] = 1;
    for (i = 5; i <= N; i++) {
        part[i] = part[i - 2] + part[i - 3];
    }
    printf("%d", part[N]);
    return 0;
}

