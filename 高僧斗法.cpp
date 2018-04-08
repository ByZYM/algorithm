#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define N 10000000

int a[365];
float chance[N];
//30人的班级，出现生日重复的概率有多大 
int main(){
	
	srand((unsigned)time(NULL));
	int n=0;
	for(int i=0;i<N;i++){
		memset(a,0,sizeof(a));
		for(int j=0;j<30;j++){
			int p = rand()%365;
			if(a[p]==1){
				n++;
				break;
			}else{
				a[p]++;
			}
		}
	}
	cout<<(float)n/N<<endl;
	
	return 0;
}
