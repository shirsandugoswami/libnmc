#include<stdio.h>
#include<libnmc.h>

double f(double x)
{
    return(x*x+2*x+2);
}
int main()
{
    int n;
    double x0,xn,integration;
    printf("Enter Lower limit : ");
    scanf("%lf",&x0);
    printf("Enter Upper limit : ");
    scanf("%lf",&xn);
    printf("enter value of n : ");
    scanf("%d",&n);
    integration=nmc_simpsons(f,x0,xn,n);
    printf("the integration of the function in given limit is : %lf\n",integration);
}