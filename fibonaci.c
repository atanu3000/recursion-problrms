#include<stdio.h>
void fib(int);
int main(){
	int n;
	printf("Enter no. of term: ");
	scanf("%d",&n);
	fib(n);
	return 0;
}

void fib(int num)
{
	static int n1=0,n2=1,n3=0;
	if(num!=0){
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
		fib(num-1);
	}
	
}