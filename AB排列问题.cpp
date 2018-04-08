
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

//排列问题
//m个A和n个B可以组成多少个不同排列 
int f(int m,int n){
	if(m==0||n==0)return 1;
	return f(m-1,n)+f(m,n-1);
}

int main()
{
	cout<<f(3,3)<<endl;
    return 0;
}
 
