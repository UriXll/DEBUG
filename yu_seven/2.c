﻿#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day < 32) {
        if (day <= 31) {
            printf("YES");
        }
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day < 31) {
        if (day <= 30) {
            printf("YES");
        }
    } else if (year % 100 != 0 && year % 4 == 0 && month == 2 && day <= 28) {
        printf("YES");
    } else if (year % 100 == 0 && year % 400 == 0 && month == 2 && day < 30) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}