#ifndef LIBNMC_H
#define LIBNMC_H

typedef double (*nmc_function)(double);
typedef double (*nmc_ode_function)(double, double);

//Root finding 

double nmc_bisection(
    nmc_function f,
    double xl,
    double xu,
    double tolerance,
    int max_iterations
);

double nmc_newton(
    nmc_function f,
    nmc_function df,
    double x0,
    double tolerance,
    int max_iteration
);

//Numerical integration 

double nmc_trapezoidal(
    nmc_function f,
    double x0,
    double xn,
    int n
);

double nmc_simpsons(
    nmc_function f,
    double x0,
    double xn,
    int n
);

double nmc_monte_carlo(
    nmc_function f,
    double a,
    double b,
    int samples
);

//ode solvers 

double nmc_euler(
    nmc_ode_function f,
    double x0,
    double y0,
    double xf,
    int n
);

double nmc_rk4(
    nmc_ode_function f,
    double x0,
    double y0,
    double xf,
    int n
);

#endif 