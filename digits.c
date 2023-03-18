//Write a program to count number of digits in an Integer
#include<stdio.h>
int main()
{
	long long n;
	int count;
	printf("Enter a number:");
	scanf("%lld",&n);
	count=0;
	do {
		n=n/10;
		++count;
	} while(n!=0);
	printf("The total no of digits are :%d",count);
	
	
}

