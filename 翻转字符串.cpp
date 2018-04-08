#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

void swap(char *a,char *b){
	char *t=a;
	*a=*b;
	*b=*t;
}
//Çó·­×ª´® 
void f(char* a,int p){
	if(p==strlen(a)/2){
		cout<<a<<endl;
	}
	swap(a[p],a[strlen(a)-1-p]);
	f(a,p+1);
}

int main()
{
	char a[100]="ABCDEF";
    f(a,0);
    return 0;
}
