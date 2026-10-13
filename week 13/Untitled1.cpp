#include<stdio.h>
int main(void)
{
	int n,m,digit,reverse=0,temp,count=0;
	printf("Input n and m for range[n,m]:\n");
	scanf("%d %d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		temp=i;
		while(temp!=0)
		{
			digit=temp%10;
		
			reverse=10*reverse+digit;
			
			temp=temp/10;
			
		}
		if(i==reverse)
		{
			count++;
		}
		
	}
	printf("%d are the numbers of palindrome",count);
}
