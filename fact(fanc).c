#include<stdio.h>
int fact(int);
int main(){
	int n;
	printf("Enter a num: ");
	scanf("%d",&n);
	printf("factorial of %d: %d",n,fact(n));
	return 0;
}
int fact(int num)
{
	if(num==0||num==1)
		return 1;
	else
		return num * fact(num-1);
}