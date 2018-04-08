#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 1000000

//图片宽高 
int a[N][2];

int maxH;
//排列计算高度 
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
	
	//全部插入完毕 
	if(p==size-1){
		//输出 
		maxH = height_beforeTotal+height_now;
		return;
	}
	
	//如果剩余宽度大于0 
	if(width_now>0){
		//如果小于当前图片,图片进行缩放 再插入
		if(width_now<a[p][0]){
			//缩放
			int pwidth=width_now;
			int pheight=a[p][1]*1.0/pwidth+0.5;
			//计算最高高度 
			int height = height_now>pheight?height_now:pheight;
			cal(p+1,0,height,height_beforeTotal,width_max,size,skip);
			return;
		} else{
			//如果大于当前图片 //插入图片 
			
			//当前行最大高度 
			int height = height_now>a[p][1]?height_now:a[p][1];
			cal(p+1,width_now-a[p][0],height,height_beforeTotal,width_max,size,skip);
			return;
		}
	}
	//剩余宽度为0 新开一行 
	else{
		cal(p,width_max,0,height_now+height_beforeTotal,width_max,size,skip);
	}
	
	
}

int main(){
	//宽度 
	int m;
	//图片张数 
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
