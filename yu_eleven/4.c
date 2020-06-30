#include <stdio.h>
#include <string.h>

int  f(char k[500])
{
    char s[33];//要输出的字符串数组
    int bits[32];
    int arr[32];
    for (int i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    int i, j;
    int m = strlen(k);
    for (i = 1; i <= m; i++) {//(1<=i<=k)
        arr[i % 32] = arr[i % 32] + (int)k[i - 1];
    }
    for (j = 0; j <= 31; j++) {//(0<=j<=31)
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        printf("%c", (bits[j] % 85) + 34);
    }


    return 0;
}
int main()
{
    char k[500];
    scanf("%s", &k);
    f(k);
    return 0;
}