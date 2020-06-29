#include <stdio.h>
long long fact(long long num);
long long arrange(long long num1, long long num2);

int main() {
    int n;
    scanf("%d", &n);
    long long i = 0;
    long long x;
    long long y;
    int m = 1;

    for(x = 0; x <= n / 2; x++) {
        for(y = 0; y <= n / 3; y++) {
            if(x * 2 + y * 3 == n) {
                i += arrange(x, x + y) / fact(y);
            }
        }
    }

    printf("%lld", i);
    return 0;
}

long long fact(long long num)
{
    long long result = 1;

    for(long long i = 2; i <= num; i++) {
        result *= i;
    }

    return result;
}

long long arrange(long long num1, long long num2)
{
    long long result = 1;

    for(long long i = num1 + 1; i <= num2; i++) {
        result *= i;
    }
    
    return result;
}
