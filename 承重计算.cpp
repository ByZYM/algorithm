#include <stdio.h>
#include <math.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()  
{  
    double a[33][33],Map[33][33],k;  
    int i,j;  
    for(i=0;i<29;i++)  
    {  
        for(j=0;j<=i;j++)  
        {  
            scanf("%lf",&k);  
            a[i][j]=k;
        } 
    }  
    for(i=0;i<30;i++)  
    {  
        a[29][i]=0;  
    }  
    for(i=1;i<30;i++)  
    {  
        for(j=0;j<=i;j++)  
        {  
            if(j>0&&j<i)a[i][j]+=a[i-1][j]/2+a[i-1][j-1]/2;  
            if(j==i)a[i][j]+=a[i-1][j-1]/2;
            if(j==0)a[i][j]+=a[i-1][j]/2;
        }  
    }  
    double max1=0,min1=9999999;  
    for(i=0;i<30;i++)  
    {  
       // printf("%lf\n",Map[29][i]);  
        if(max1<a[29][i])  
            max1=a[29][i];  
        if(min1>a[29][i])  
            min1=a[29][i];  
    }  
    cout<<max1<<" "<<min1<<endl;
    printf("%.0lf\n",max1*2086458231/min1);  
}  
