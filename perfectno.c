//13. Write a program to check whether the given number is
//perfect number or not
//❑Algorithm:
//▪ Read an input value from the user
//▪ Find all divisors of the number except the number itself
//▪ If sum of all divisors of the number is equal to the number,
//then print ‘Perfect number’
//▪ Else, print ‘Not a Perfect number
#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%
		sum += i;i==0)
}
if(sum==n)
printf("Its a perfect number ");
else
printf("not a perfect number");
}