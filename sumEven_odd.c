#include<stdio.h>
int sum_even(int,int);
int sum_odd(int,int);
int main(){
	int r1,r2;
	printf("Enter the range: ");
	scanf("%d %d",&r1,&r2);
	
	printf("Sum of even numbers: %d\n",sum_even(r1,r2));
	printf("Sum of odd numbers: %d\n",sum_odd(r1,r2));
	
	return 0;
}
int sum_even(int num1,int num2)
{
	if(num1<num2 && (num1%2)==0)
	{
		return(num1+sum_even(num1+2,num2));		
	}
	
}

int sum_odd(int num1,int num2)
{
	int sum2=0;
	if(num1<num2 && (num1%2)!=0){
		return sum2 + num1;
	}
	sum_odd(num1+1,num2);
	
}