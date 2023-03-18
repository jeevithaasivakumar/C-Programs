//Write a program to print GCD of 2 numbers
#include<stdio.h>
int main()

{
	int i,a,b,gcd;
	printf("Enter the two nos:");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a && i<=b;++i)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
		
	}
	printf("The gcd of two nos is %d",gcd);
	return 0;
}