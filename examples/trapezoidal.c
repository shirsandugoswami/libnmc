#include<stdio.h>
#include<math.h>
#include<libnmc.h>
double f(double x)
{
    return ((2*x) +5.0);
}
int main()
{
    double x0,xn,val;
    int n;
    
    printf("Enter lower limit: ");
    scanf("%lf",&x0);
    printf("Enter upper limit: ");
    scanf("%lf",&xn);
    printf("Enter value of n : ");
    scanf("%d",&n);
    val=nmc_trapezoidal(f,x0,xn,n);
    printf("the integration of the function in given limit is : %lf\n",val);
}