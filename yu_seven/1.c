﻿#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
    int year, mouth, day;
    scanf("%d-%d-%d", &year, &mouth, &day);
    if (mouth <= 12 && mouth >= 1) {
        if (mouth == 1 || mouth == 3 || mouth == 5 || mouth == 7 || mouth == 8 || mouth == 10 || mouth == 12) {
            if (day <= 31 && day >= 1) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) {
            if (day <= 30 && day >= 1) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else if (mouth == 2) {
            if (year % 100 != 0) {
                if (year % 4 == 0) {
                    if (day <= 29 && day >= 1) {
                        printf("YES");
                    } else {
                        printf("NO");
                    }
                } else {
                    if (day <= 28 && day >= 1) {
                        printf("YES");
                    } else {
                        printf("NO");
                    }
                }
            } else {
                if (year % 400 == 0) {
                    printf("YES");
                } else {
                    printf("NO");
                }
            }
        }
    } else {
        printf("NO");
    }

    return 0;
}
