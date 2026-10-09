#include <stdio.h>
#include <libnmc.h>

double f(double x)
{
    return 2 * x + 5;
}

int main(void)
{
    double a, b, result;
    int samples;

    printf("Enter number of samples: ");
    scanf("%d", &samples);

    printf("Enter lower limit: ");
    scanf("%lf", &a);

    printf("Enter upper limit: ");
    scanf("%lf", &b);

    result = nmc_monte_carlo(f, a, b, samples);

    printf("Monte Carlo integration = %lf\n", result);

    return 0;
}