#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
//求公约数 
int gcd(int a,int b){
	if(a==0)return b;
	return gcd(b%a,a);
}

int main(){
	cout<<gcd(4,7);
	return 0;
}
