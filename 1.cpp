//��ʵ�����ȼ���ȫ����3�ģ��ٰ�3һ��һ������2�����������ľ���1��
#include<stdio.h>
int main()
{
	int sum,n,i;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		sum+=n/3;//�����ȼ���ȫ������3�ġ�
		for(i=0;i<=n/3;i++)
			sum+=((n-i*3)/2);
		printf("%d\n",sum+1);//���ǵü�һ������ȫ����1�������
	}
return 0;
}
