#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;

int a[8][8];

//�˻ʺ����� 8*8���̷���8���ʺ� 
//���������ʺ󶼲��ܴ���ͬһ�С�ͬһ�л�ͬһб���� 
void f(int n,int x,int y){
	if(n==0){
		a++;
		return;
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			//�������ͬһ�С�ͬһ�л�ͬһб����
			if(x==i||y==j||x-y==0){
				continue;
			}
			
			//��̽ 
			f(n-1,i,j);
			//���� 
			f(n,i,j);
		}
	}
}

//��Ǯ���� 
int main(){
	memset(a,0,sizeof(a));
	//�ʺ����� 
	int n=8;
	
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			//���õ�һ������
			 

			//���[������������  ]���������� 
				//���� 
		}
	}
	cout<<a<<endl;
	
	return 0;
}
