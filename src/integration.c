#include<math.h>
#include<stdlib.h>
#include "libnmc.h"

double nmc_trapezoidal(
    nmc_function f,
    double x0,
    double xn,
    int n
)
{
    double sum = 0.0;
    double h;

    if (n <= 0)
        return 0.0;

    h = (xn - x0) / n;

    for (int i = 1; i < n; i++)
    {
        sum += f(x0 + i * h);
    }

    return ((h / 2.0) * (f(x0) + 2.0 * sum + f(xn)));
}

//simpson's 1/3 rule

double nmc_simpsons(
    nmc_function f,
    double x0,
    double xn,
    int n
)

{
    double x;
    double h,integration;
    double sum1 =0;
    double sum2 =0;
   
    h=(xn-x0)/n;
    for(x=x0+h;x<xn-1;x=x+2*h)
    {
        sum1+=f(x);
    }
    for(x=x0+2*h;x<xn;x=x+2*h)
    {
        sum2+=f(x);
    }
    integration=h/3*(f(x0)+4*sum1+2*sum2+f(xn));
    return integration;
}



double nmc_monte_carlo(
    nmc_function f,
    double a,
    double b,
    int samples
)
{   
    long int i;
    double sum=0.0;
    double x;
    
    for(i=0;i<samples;i++)
    {
        x=a+(b-a)*((double)rand()/RAND_MAX);
        sum += f(x);
    }
    return (b - a) * sum / samples;
}
    

