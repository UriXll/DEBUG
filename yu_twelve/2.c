#include <stdio.h>
#define PI 3.14159

int main()
{
    double r;
    scanf("%lf\n", &r);
    printf("%.3f\n", (double)PI * r * 2);
    printf("%.3f", (double)PI * r * r);
    return 0;
}
