// Fibonacci series
#include<stdio.h>
int main()
{
	int i,f=0,s=1,n,k;
	printf("Enter the range for the fibonacci series:");
	scanf("%d",&n);
	printf("The fibonaci series is %d %d",f,s);
	for(i=2;i<n;++i)
	
	{
		k=f+s;
		printf(" %d",k);
		f=s;
		s=k;
	}
	return 0;
	
}