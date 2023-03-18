/*Write a program to check whether a number is Abundant number
or not
Read an input value from the user (n)
▪ Find the divisors (except the number itself) of ‘n’ and find their sum
(s)
▪ If s>n then print ‘Abundant number’ on screen
Number=18
Divisors = 1,2,3,6,9
s= 1+2+3+6+9 s=21
s>n, Abundant numbe
▪ Else, print ‘Given number is not Abundant number’
N*/
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0)
		sum += i;
	}
	if(sum>n)
	printf("It is an abundant number");
	else
	printf("not an abundant number");
	}
    