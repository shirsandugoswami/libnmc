#include <stdio.h>
#include<libnmc.h>
double f(double x, double y) 
{
    return x + y;
}
int main() 
{
    double x0,y0,x, n;
    printf("Enter initial value of x: ");
    scanf("%lf", &x0);
    
    printf("Enter final value of x: ");
    scanf("%lf", &x);

    printf("Enter initial value of y: ");
    scanf("%lf", &y0);
    
    printf("Enter step number: ");
    scanf("%lf", &n);
    
    
   
    printf("y = %lf\n", nmc_rk4(f, x0, y0, x, n));
    return 0;
}