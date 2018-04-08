#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//求全排列 
void swap(char *a,char *b){
	char t = *a;
	*a=*b;
	*b=t;
}

//全排列 
void f1(char ch[],int n,int len){
	if(n==len){
		printf("%s\n",ch);
	}
	for(int i=n;i<len;i++){
		swap(&ch[n],&ch[i]);
		f1(ch,n+1,strlen(ch));
		swap(&ch[n],&ch[i]);
	}
	return ;
}

int main1(){
	char ch[]="abcd";
	f1(ch,0,strlen(ch));
	return 0;
}
