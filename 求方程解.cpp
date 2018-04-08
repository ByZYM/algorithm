#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

void cal(int num){
	int z;
	for(int x=1;x<=100;x++){
		for(int y=1;y<=100;y++){
			z=(int)sqrt(num-x*x-y*y);
			if(z!=0&&num-x*x-y*y==z*z){
				cout<<x<<" "<<y<<" "<<z<<endl;
				return;
			}
		}
	}
}

int main(){
	
	int num;
	
	while(scanf("%d",&num)!=EOF){
		cal(num);
	}
	
	return 0;
}
