//����
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
//�Ӷ�ͷ���� 
char pop(player *p){
	char t=p->ch[p->begin];
	p->begin+=1;
	p->begin%=size;
	return t;
}

//�Ӷ�β���� 
char rvPop(player *p){
	char t=p->ch[p->end];
	p->end-=1;
	if(p->end==-1)p->end=size-1;
}

//���� 
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
		//���ĸ��� 
		on==1?p=p1:p=p2;
		//p���� �����ƶ� 
		put(table,pop(p));
		
		//�ж�����
		
		//���� 
		
		//��������Ȩ 
		on=!on;
	}
	
	
	
	return 0;
} 
