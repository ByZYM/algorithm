#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
//aΪ��ƱԱ5�ǵĸ��� 
//jΪ��ǰ����5�ǻ���1Ԫ  -1Ϊ5�� 1Ϊ1Ԫ 
int f(int m,int n,int a,int j){
	//����5�� 
	if(j==-1){
		if(m==0){
			return 1;
		}else{
			return f(m-1,n,a+1,-1)+f(m,n-1,a-1,1);
		}
	}
	//����1Ԫ 
	else if(j==1){
		if(a==0){
			return 0;
		}
		if(n==0){
			return 1;
		}
	}
	
	return f(m-1,n,a+1,-1)+f(m,n-1,a-1,1);
	
}

//��Ǯ���� 
int main(){
	//����5�ǵ����� 
	int m=5;
	//����1Ԫ������ 
	int n=3;
	
	cout<<f(m,n,0,0)<<endl;
	
	return 0;
}
