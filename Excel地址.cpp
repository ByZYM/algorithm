#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

//½øÖÆÔËËã 26->Z  27->AA 1->A
void f(int n){
	char r[100];
	int p=0;
	while(n!=0){
		int a=n%26;
		if(!a)r[--n,p++]='Z';
		else r[p++]='A'+a-1;
		n/=26;
	}
	for(int i=p-1;i>=0;i--)
		cout<<r[i];
}

int main(){
	for(int i=1;i<60;i++){
		cout<<i<<" ";
		f(i);
		cout<<endl;
	}
	f(2054);
}
