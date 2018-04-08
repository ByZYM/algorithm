#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define N 100000
int a[N];
int init(){
	
}
//买不到的数目 
//已知两数 求最大不能组合出的数字 

//解题思路：如4和7
//当出现连续4个都能组合出之后  这四个的前一个即答案
// ......x x+1 x+2 x+3 y y+1 y+2  因为y=x+4 y+1=x+1+4 所以后面的都可以得到。 
int f(int a,int b){

	
	return -1;
}

int main(){
	cout<<f(4,7);
	return 0;
}
