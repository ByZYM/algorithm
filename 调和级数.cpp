//调和级数 
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
	double sum=0;
	int p=1;
	while(1){
		sum+=1.0/(p++);
		if(sum>=15.0){
			break;
		}
	}
	cout<<p-1<<endl;
	
}
