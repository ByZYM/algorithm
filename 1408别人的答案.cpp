#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    double  v,d;
    while(~scanf("%lf%lf",&v,&d))
    {
        double sum=0,t=0;
        for(int i=1;sum<v;i++)
        {
            t+=i;
            sum+=i*d;
            if(sum>=v) break;
            t++;
        }
        t-=(sum-v)/d;
        printf("%.0lf\n",t+0.4);
    }
    return 0;
}
