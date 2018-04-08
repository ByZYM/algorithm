#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

int cal(double a,double b,int i){
	cout<<a<<" "<<b*(i)<<endl;
	//等于0 
	if(fabs(a-b*(i))<=1E-3){
		
		return i;
	}
	//小于0 
	else if(a-b*(i)<0){
		return a/b+0.5+1;
	}
	return (i)+1+cal(a-b*(i),b,i+1);
}

int main(){
	
	double VUL,D;
	
	while(scanf("%lf%lf",&VUL,&D)!=EOF){
	  cout<<cal(VUL,D,1)<<endl;
	}
	
	return 0;
}
