#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


int a[]={1,2,3,4,5,6,7,8,9};

int con[200][9];

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int sum=0;
void f(int arr[],int p,int size){
	if(p==size-1){

		if(
		arr[0]+arr[1]+arr[2]==15&&
		arr[3]+arr[4]+arr[5]==15&&
		arr[6]+arr[7]+arr[8]==15&&
		
		arr[0]+arr[3]+arr[6]==15&&
		arr[1]+arr[4]+arr[7]==15&&
		arr[2]+arr[5]+arr[8]==15&&
		
		arr[0]+arr[4]+arr[8]==15&&
		arr[6]+arr[4]+arr[2]==15
		){
			for(int i=0;i<9;i++){
				con[sum][i]=arr[i];
			}
			sum++;
		}
		return;
	}
	
	for(int i=p;i<size;i++){
		swap(&arr[i],&arr[p]);
		f(arr,p+1,size);
		swap(&arr[i],&arr[p]);
	}
}

void cal(int arr[]){
	int s=0;
	int t[9];
	for(int i=0;i<112;i++){
		for(int j=0;j<9;j++){
			if(arr[j]!=0&&con[i][j]!=arr[j]){
				break;
			}
			//È«²¿Æ¥Åä 
			if(j==8){
				s++;
				for(int k=0;k<9;k++){
					t[k]=con[i][k];
				}
			}
		}
		
		if(s>=2){
			cout<<"Too Many"<<endl;
			return;
		}
		
	}
	
	if(s==1){
		for(int i=0;i<9;i++){
			
			printf("%d ",t[i]);
			
			if((i+1)%3==0){
				cout<<endl;
			}
		}
	}
}

int main()
{
	f(a,0,9);
	int input[9];
	int ii;
	while((cin>>ii)){
		input[0]=ii;
		for(int i=1;i<9;i++){
			cin>>input[i];
		}
		cal(input);
	}
	return 0;
}
