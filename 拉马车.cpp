//拉马车
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

#define size 100

typedef struct poker{
	char ch[size];
	int begin=0;
	int end=0;
} player,table;
//从队头出列 
char pop(player *p){
	char t=p->ch[p->begin];
	p->begin+=1;
	p->begin%=size;
	return t;
}

//从队尾出列 
char rvPop(player *p){
	char t=p->ch[p->end];
	p->end-=1;
	if(p->end==-1)p->end=size-1;
}

//入列 
void put(player *p,char n){
	p->ch[(p->end)++]=n;
	p->end%=size;
}

int getSize(player *p){
	if(p->end>p->begin){
		return p->end-p->begin;
	}else{
		return p->end+size-p->begin+1;
	}
}


int main(){
	player *p1= new player;
	player *p2= new player;
	table *t1 = new table;
	int on=1;
	player *p;
	while(getSize(p1)!=0&&getSize(p2)!=0){	
		//该哪个人 
		on==1?p=p1:p=p2;
		//p出牌 加入牌堆 
		put(table,pop(p));
		
		//判断拿牌
		
		//拿牌 
		
		//交换控制权 
		on=!on;
	}
	
	
	
	return 0;
} 
