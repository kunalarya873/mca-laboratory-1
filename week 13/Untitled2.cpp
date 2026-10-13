#include<stdio.h>
int main(void)
{
	int n,a=0,b=1,sum,sum2=0;
	printf("How many numbers you want?(input n):\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=a+b;
		printf("%d\n",a);
		sum2=sum2+a;
		a=b;
		b=sum;
	}
	printf("Sum=%d",sum2);
}
