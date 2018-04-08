#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
//排列组合的和为定值，求组合 
void f(int sum,int a[],int p,int len,int b[],int k){
	if(sum==0){
		cout<<"输出：>>>>>>";
		for(int i=0;i<k;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
		return;
	}else if(sum<0){
		k=0;
		return;
	}
	for(int i=p;i<len;i++){
		b[k]=a[p];
		cout<<"选"<<a[p]<<endl;
		f(sum-a[p],a,i+1,len,b,k+1);
		b[k]=-1;
		cout<<"不选"<<a[p]<<endl;
		f(sum,a,i+1,len,b,k);
	}
	
}

int main(){
	int sum=6;
	int a[]={1,2,3,4,5};
	int b[10];
	f(6,a,0,5,b,0);
	return 0;
	
}
