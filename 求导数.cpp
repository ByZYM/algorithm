#include <stdio.h>
#include <math.h>
void cal(char *s){
	//����ָ�� 
	char *p=s;
	//�ֲ�����ָ�� 
	char *t=s;
	//ǰ׺���� 
	int prefix=1;
	//ͷ�ϵ����� 
	int head=1;
	while(p!='\0'){
		
		//�ҵ�x����λ�� 
		if(*p=='x'){
			//1.��ȡǰ׺���� 
			
			//���x���ǵ�һλ 
			if(p-s>0){
				
				prefix=0;
				while(t!=p){
					//s��p֮��Ϊǰ׺���� 
					prefix+=(*t-'0')*(int)(pow(10,p-t-1)+0.5);
					t++;
				}
			}
			//���x�ǵ�һλ Ĭ��prefixΪ1 
			
			//2.��ȡ��׺����
			t=p;
			//������ں�׺ 
			if(*(++t)=='^'){
				t++;
				
				//��ȡ��׺���� 
				while(*p!='\0'){
					p++;
				}
				head=0;
				while(t!=p){
					//s��p֮��Ϊǰ׺���� 
					head+=(*t-'0')*(int)(pow(10,p-t-1)+0.5);
					t++;
				}
			} 
			
			//��������ں�׺ ��Ĭ��Ϊ1 
			break;
		}
		p++;
	}
	printf("����Ϊ%dx^%d\n",prefix*head,head-1);
}

//������ ax^b �ļ�һԪ���� x�Ա��� nΪ���� 
int main(){
	char s[100];
	while(scanf("%s",s)!=EOF){
		cal(s);
	}
	
	return 0;
}
