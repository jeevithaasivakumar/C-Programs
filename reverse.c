//Write a program to reverse a given number (Example : 123 
//output: 321)
#include<stdio.h>
int main(){
	int n,rem,rev;
	printf("Enter the number:");
	scanf("%d",&n);
	rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("reversed number :%d",rev);
	
}