#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
    double r;
    double a, b;
    scanf("%lf", &r);;
    a = (double)2 * PI * r;
    printf("%.3f\n", a);
    b = (double)PI * r * r;
    printf("%.3f", b);
    return 0;
}
