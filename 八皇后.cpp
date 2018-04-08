#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

int a[8][8];

//八皇后问题 8*8棋盘放置8个皇后 
//任意两个皇后都不能处于同一行、同一列或同一斜线上 
void f(int n,int x,int y){
	if(n==0){
		a++;
		return;
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			//如果处于同一行、同一列或同一斜线上
			if(x==i||y==j||x-y==0){
				continue;
			}
			
			//试探 
			f(n-1,i,j);
			//回溯 
			f(n,i,j);
		}
	}
}

//找钱问题 
int main(){
	memset(a,0,sizeof(a));
	//皇后数量 
	int n=8;
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			//放置第一个棋子
			 

			//如果[放置其他棋子  ]不满足条件 
				//回溯 
		}
	}
	cout<<a<<endl;
	
	return 0;
}
