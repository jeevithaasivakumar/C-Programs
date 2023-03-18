//Write a program to check whether a number is Harshad
//number or not
#include<stdio.h>;
int main()
{
	int n=321;
	int rem=0,sum=0,i;
	i=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n/=10;
	}
	if(i%sum==0)
	printf("%d is a harshad number",i);
	else
	printf("%d is not a harshad number",i);
	return 0;
	
}