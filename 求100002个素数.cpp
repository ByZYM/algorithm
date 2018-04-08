#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define N 10000000
char a[N];
//求100002个素数 
int f(int p){
	for(int i=2;i<N/2;i++){
		if(a[i]==1)continue;
		for(int j=2;j<=N/i;j++){
			if(i*j<N)a[i*j]=1;
		}
	}
	int m=0;
	for(int i=2;i<N;i++){
		if(a[i]==0){
			m+=1;
			//cout<<"第 ["<<m<<"] 个为"<<i<<endl;
			if(m==p){
				return i;
			}
		}
	}
	
	return -1;
}

int main(){
	cout<<f(100002);
	return 0;
}
