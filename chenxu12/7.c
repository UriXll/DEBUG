#include <math.h>
#include <stdio.h>
#define PI 3.14159

int main()
{
    double r, c, s;
    scanf("%lf\n", &r);
    c = 2 * PI * r;
    s = PI * r * r;
    printf("%.3f\n", c);
    printf("%.3f\n", s);

    return 0;
}
