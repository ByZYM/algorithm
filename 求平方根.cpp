#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    double n = 2;
    double a = 0;
    double b = n;
    while(fabs(a-b)>1E-15)     {
        a = (a+b)/2;
        b = n/a;
        printf("%f %f\n", a,b);
    }
 
    printf("%f\n", a);
    return 0;
}
