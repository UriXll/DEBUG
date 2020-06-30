#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int arr[32];
    for (int i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    int bits[32];
    // char input[500];
    char input;
    char output[33];
    int i, j;
    int counter = 0;

    while (scanf("%c\n", &input) != EOF) {
        arr[(counter + 1) % 32] += (int)input;
        counter++;
    }

    // printf("arr = \n");
    // for(int i = 0; i < 32; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }
    //  printf("bits = \n");
    //  for(int i = 0; i < 32; i++) {
    //      printf("%d ", bits[i]);
    //  }
    //  printf("\n");
    for (j = 0; j < 32; j++) {
        output[j] = (bits[j] % 85) + 34;
        printf("%c", output[j]);
    }
    return 0;
}