#include<stdio.h>
int main(){
	int num,r;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	
	r=rev_func(num);
	printf("\nAfter reverse the no is: %d",r);
	return 0;
}
int sum=0,rem;
rev_func(int num){
	if(num){
		rem = num%10;
		sum = sum*10+rem;
		rev_func(num/10);
	}
	else
		return sum;
	return sum;
}