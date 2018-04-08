#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;
int a=0;
void f(int N){
	if(N==0){
		a++;
		return;
	}
	else if(N<0){
		return;
	}
	for(int i=1;i<=3;i++){
		f(N-i);
	}
}

int main(){
	
	int N;

	while(~scanf("%d",&N)){
		a=0;
		f(N);
		cout<<a<<endl;
	}
	return 0;

}


