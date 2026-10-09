#include<stdio.h>
#include<math.h>
#include "libnmc.h"

double nmc_euler(
    nmc_ode_function f,
    double x0,
    double y0,
    double xf,
    int n
)
{
    double x=x0;
    double y=y0;
    if (n <= 0)
        return y0;
    double h = (xf - x0) / n;
    for (int i = 0; i < n; i++)
    {
        y += h * f(x, y);
        x += h;
    }
    return y;
}

double nmc_rk4(
    nmc_ode_function f,
    double x0,
    double y0,
    double xf,
    int n
)
{
    double h = (xf - x0) / n;
    double k1, k2, k3, k4;
    for (int i = 0; i < n; i++) 
    {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);
        y0 = y0 + (k1 + 2*k2 + 2*k3 + k4) / 6;
        x0 = x0 + h;
    }
    return y0;
}