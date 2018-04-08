#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int arr[]={1,2,3,4,5,6,7,8,9};

void swap(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
//1 2 3  ,  1 3 2  ,  2 1 3  ,  2 3 1  ,  3 1 2  ,  3 2 1
//输出全排列 
void f(int a[],int p,int size){
	if(p==size-1){
		for(int i=0;i<size;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	for(int i=p;i<size;i++){
		//换位置
		swap(&a[i],&a[p]);
		f(a,p+1,size);
		//回溯 
		swap(&a[i],&a[p]);
	}
}


int main(){
	f(arr,0,5);
	return 0;
}
