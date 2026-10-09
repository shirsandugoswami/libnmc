#include <stdio.h>
#include <libnmc.h>

double f(double x, double y)
{
    return x + y;
}

int main(void)
{
    double x0, y0, xn, result;
    int n;

    printf("Enter initial x: ");
    scanf("%lf", &x0);

    printf("Enter initial y: ");
    scanf("%lf", &y0);

    printf("Enter final x: ");
    scanf("%lf", &xn);

    printf("Enter number of steps: ");
    scanf("%d", &n);

    result = nmc_euler(f, x0, y0, xn, n);

    printf("y(%lf) = %lf\n", xn, result);

    return 0;
}