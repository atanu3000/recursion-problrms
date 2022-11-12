#include<stdio.h>

int add(int);
int add_rec(int);

int main(){
	int x;
	
	printf("Enter an integer: ");
	scanf("%d",&x);
	
	printf("sum(without recursion) = %d\n",add(x));
	printf("sum(with recursion) = %d\n",add_rec(x));
	
	return 0;
}

int add(int num){	//without recursion
	int sum=0;
	while(num!=0)
	{
		sum += (num%10);
		num/=10;
	}
	return sum;
}

int add_rec(int num){	//with recursion
	
	if(num)
	{
		return (num%10) + add_rec(num/10);
	}
}