#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
//a为售票员5角的个数 
//j为当前出售5角还是1元  -1为5角 1为1元 
int f(int m,int n,int a,int j){
	//出售5角 
	if(j==-1){
		if(m==0){
			return 1;
		}else{
			return f(m-1,n,a+1,-1)+f(m,n-1,a-1,1);
		}
	}
	//出售1元 
	else if(j==1){
		if(a==0){
			return 0;
		}
		if(n==0){
			return 1;
		}
	}
	
	return f(m-1,n,a+1,-1)+f(m,n-1,a-1,1);
	
}

//找钱问题 
int main(){
	//持有5角的人数 
	int m=5;
	//持有1元的人数 
	int n=3;
	
	cout<<f(m,n,0,0)<<endl;
	
	return 0;
}
