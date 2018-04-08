
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

//整数划分问题 
void f(int x,int a[],int p){
	if(x==0){
		for(int i=0;i<p;i++){
			cout<<a[i]<<"+";
		}
		cout<<endl;
	}else{
		for(int i=x;i>0;i--){
			if(p>0&&i>a[p-1])continue;
			a[p]=i;
			f(x-i,a,p+1);
		}
	}
}

int main()
{
	int a[100]={1,2,3,4};
	f(6,a,0);
    return 0;
}
 
