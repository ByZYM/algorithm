//其实就是先假设全部是3的，再把3一个一个换成2，不能整除的就是1的
#include<stdio.h>
int main()
{
	int sum,n,i;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		sum+=n/3;//这是先假设全部换成3的。
		for(i=0;i<=n/3;i++)
			sum+=((n-i*3)/2);
		printf("%d\n",sum+1);//最后记得加一，就是全部是1的情况。
	}
return 0;
}
