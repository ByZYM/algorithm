//µÚ39¼¶Ì¨½×
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <math.h>
using namespace std;


int f(int n,int sum){
	if(n==0){
		if(sum%2==0){
			return 1;
		}
		return 0;
	}else if(n<0){
		return 0;
	}
	return f(n-1,sum+1)+f(n-2,sum+1);
}
int main(){
	cout<<f(39,0)<<endl;
	return 0;
}
