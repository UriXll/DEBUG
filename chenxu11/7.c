#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    char fs[33];
    int arr[32];
    int bits[32];
    int i;
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        arr[(i + 1) % 32] += str[i];
    }
    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i] = bits[i] % 85 + 34;
    }
    printf("%s", fs);

    return 0;
}
