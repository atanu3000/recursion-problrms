#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter nth positive integer: ");
	scanf("%d",&n);
	printf("sum = %d",sum(n));
	return 0;
}

int sum(int num)
{
	if(num>1){
		return(num) + sum(num-1);
	}
	else
		return num;	
}