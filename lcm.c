//Write a program to print LCM of 2 numbers
#include<stdio.h>
int main()

{
	int i,a,b,lcm,gcd;
	printf("Enter the two nos:");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a && i<=b;++i)
	{
		if(a%i==0 && b%i==0)
		gcd=i;
		
	}
	lcm=a*b/gcd;
	printf("The lcm of two nos is %d",lcm);
	return 0;
}