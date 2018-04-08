#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// 杨辉三角的第row行，第col列 
long long f(int row, int col){
	if(row<2) return 1;
	if(col==0) return 1;
	if(col==row) return 1;
	
	long long a[1024];
	a[0]=1;
	a[1]=1;	
	int p = 2;
	int q;
	
	while(p<=row){
		a[p] = 1;
		for(int q=p-1;q>0;q--) a[q] = a[q] + a[q-1]; //填空
		p++;
	}
	
	for(int i=0;i<col;i++){
		cout<<a[i]<<" ";
	}
	
	return a[col];
}

int main()
{
	//printf("%d\n", f(2,1));
	for(int i=0;i<9;i++){
		printf("%d\n", f(i,1));
	}
	//printf("%lld\n", f(40,20));	
	return 0;
}
