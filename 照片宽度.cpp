#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 1000000

//ͼƬ��� 
int a[N][2];

int maxH;
//���м���߶� 
void cal(int p,
int width_now,
int height_now,
int height_beforeTotal,
int width_max,
int size,int skip){
	if(p==skip){
		if(p==size-1){
			maxH = height_beforeTotal+height_now;
			return;
		}
		cal(p+1,width_now,height_now,height_beforeTotal,width_max,size,skip);
		return;
	}
	
	//ȫ��������� 
	if(p==size-1){
		//��� 
		maxH = height_beforeTotal+height_now;
		return;
	}
	
	//���ʣ���ȴ���0 
	if(width_now>0){
		//���С�ڵ�ǰͼƬ,ͼƬ�������� �ٲ���
		if(width_now<a[p][0]){
			//����
			int pwidth=width_now;
			int pheight=a[p][1]*1.0/pwidth+0.5;
			//������߸߶� 
			int height = height_now>pheight?height_now:pheight;
			cal(p+1,0,height,height_beforeTotal,width_max,size,skip);
			return;
		} else{
			//������ڵ�ǰͼƬ //����ͼƬ 
			
			//��ǰ�����߶� 
			int height = height_now>a[p][1]?height_now:a[p][1];
			cal(p+1,width_now-a[p][0],height,height_beforeTotal,width_max,size,skip);
			return;
		}
	}
	//ʣ����Ϊ0 �¿�һ�� 
	else{
		cal(p,width_max,0,height_now+height_beforeTotal,width_max,size,skip);
	}
	
	
}

int main(){
	//��� 
	int m;
	//ͼƬ���� 
	int n;
	
	cin>>m>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	int min=N;
	int w;
	int p;
	int x;
	for(int x=0;x<n;x++){
		
		cal(0,0,0,0,m,n,x);
		w=maxH;
		if(min>w){
			min=w;
			p=x;
		}
	}
	
	cout<<min<<endl;
	
	
}
