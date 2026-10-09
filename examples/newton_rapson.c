#include<stdio.h>
#include<libnmc.h>

double f(double x )
{
    return x*x*x+2*x+5;
}
double df(double x)
{
    return 3*x*x+2;
}

int main()
{
    double x0=2.0;
    double root,tol=0.0001;
    int max_iter=10;
    printf("using newton rapson method : \n");
    root=nmc_newton(f,df,x0,tol,max_iter);
    printf("maximum iteration reached.approximate root:%f\n",root);
}
