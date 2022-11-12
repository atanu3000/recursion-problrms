#include<stdio.h>
int sum_digit(int);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("sum of digits: %d",sum_digit(num));
	return 0;
}

int sum = 0;
int sum_digit(int num){
	if(num){
		sum+=(num%10);
		sum_digit(num/10);
		return sum;
	}
	
}