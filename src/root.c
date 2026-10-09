#include <math.h>
#include "libnmc.h"

double nmc_bisection(
    nmc_function f,
    double xl,
    double xu,
    double tolerance,
    int max_iterations
)
{
    double xm;

    if (f(xl) * f(xu) >= 0.0)
        return NAN;

    for (int i = 0; i < max_iterations; i++)
    {
        xm = (xl + xu) / 2.0;

        if (fabs(f(xm)) < tolerance)
            return xm;

        if (f(xl) * f(xm) < 0.0)
            xu = xm;
        else
            xl = xm;

        if (fabs(xu - xl) < tolerance)
            return xm;
    }
        return xm;
}


double nmc_newton(
    nmc_function f,
    nmc_function df,
    double x0,
    double tolerance,
    int max_iteration
)
{
    int i;
    float x1;
    for(i=1;i<=max_iteration;i++)
    {
        x1=x0-f(x0)/df(x0);
        if(fabs(x1-x0)<tolerance)
        {
            return 0;
        }
        x0=x1;
    }
    return x1;
}



