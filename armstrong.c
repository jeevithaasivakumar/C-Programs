/*Write a program to check whether the given number is
Armstrong number or not
Sample I/O: n=153; calculate 1^3+5^3+3^3 =153 if (a==n),
print Armstrong number8*/

#include<stdio.h>
int main()
{
	int n,r,sum=0,p;
	printf("Enter the number to check whether armstrong or not");
	scanf("%d",&n);
	p=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(p==sum)
	printf("Its Armstrong number");
	else
	printf("not a Armstrong number");
	return 0;

	
	
}