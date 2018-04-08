#include <stdio.h>
#include <math.h>
void cal(char *s){
	//遍历指针 
	char *p=s;
	//局部遍历指针 
	char *t=s;
	//前缀数字 
	int prefix=1;
	//头上的数字 
	int head=1;
	while(p!='\0'){
		
		//找到x所在位置 
		if(*p=='x'){
			//1.获取前缀数字 
			
			//如果x不是第一位 
			if(p-s>0){
				
				prefix=0;
				while(t!=p){
					//s到p之间为前缀数字 
					prefix+=(*t-'0')*(int)(pow(10,p-t-1)+0.5);
					t++;
				}
			}
			//如果x是第一位 默认prefix为1 
			
			//2.获取后缀数字
			t=p;
			//如果存在后缀 
			if(*(++t)=='^'){
				t++;
				
				//获取后缀长度 
				while(*p!='\0'){
					p++;
				}
				head=0;
				while(t!=p){
					//s到p之间为前缀数字 
					head+=(*t-'0')*(int)(pow(10,p-t-1)+0.5);
					t++;
				}
			} 
			
			//如果不存在后缀 则默认为1 
			break;
		}
		p++;
	}
	printf("导数为%dx^%d\n",prefix*head,head-1);
}

//求形如 ax^b 的简单一元导数 x自变量 n为常量 
int main(){
	char s[100];
	while(scanf("%s",s)!=EOF){
		cal(s);
	}
	
	return 0;
}
