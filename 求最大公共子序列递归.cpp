#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

int max(int a,int b){
	return a>b?a:b;
}

//求最大公共子序列
//如 abc aaabbcc 最大公共子序列 为 abc 
int f(char* a,int i,char* b,int j){
	if(i==strlen(a) || j==strlen(b)){
		return 0;
	}
	if(a[i]==b[j]){
		return f(a,i+1,b,j+1)+1;
	}else{
		return max(f(a,i+1,b,j),f(a,i,b,j+1));
	}
}

int main1()
{
    cout<<f("abc",0,"aaaabbbc",0)<<endl;
    return 0;
}
