/*Write a program to find Factorial of a number

Formula : n*(n-1)
Sample I/O: n=5; factorial of 5=5*4*3*2*1
*/
#include<stdio.h>
int main(){
	int n,fact=1,x=1;
	printf("Enter the number to find factorial:");
	scanf("%d",&n);
    while(x<=n)
    {
    	fact=fact*x;
    	x++;
	}
    
    
		printf("factorial is :%d",fact);
	
	
	return 0;
}