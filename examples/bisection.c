#include <stdio.h>
#include <libnmc.h>

double f(double x)
{
    return x * x * x - 4.0;
}

int main(void)
{
    double root;

    root = nmc_bisection(f, 0.0, 3.0, 1e-6, 100);

    printf("Root = %.6f\n", root);

    return 0;
}