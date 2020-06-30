#include <stdio.h>
#include <string.h>

int main()
{
    char arr[32];
    char str[50000];
    int bits[32];
    char result[32];
    char input;
    int j = 0;

    for (int i = 0; i < 50000; i++) {
        str[i] = 0;
    }
    for (int i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    while (scanf("%c\n", &input) != EOF) {
        if (input == '\n') {
            break;
        }
        str[j] = (int)(input);
        j++;
    }

    for (int i = 0; i < j; i++) {
        arr[(i + 1) % 32] = arr[(i + 1) % 32] + (int)(str[i]);
    }

    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        result[i] = (bits[i] % 85) + 34;
    }

    for (int i = 0; i < 32; i++) {
        printf("%c", result[i]);
    }

    return 0;
}