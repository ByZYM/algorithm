#include <stdio.h>
#include <math.h>
#include <iostream>
#include <math.h>
using namespace std;

//µİ¹é£º×éºÏÊı
int f(int n, int m)
{
	if(m>n) return 0;
	if(m==0) return 1;
 
	return f(n-1,m-1) + f(n-1,m);
}

int main(){
	cout<<compute(4,2)<<endl;
	return 0;
}
