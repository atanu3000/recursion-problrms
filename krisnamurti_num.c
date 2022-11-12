#include<stdio.h>
int fact(int);
int main(){
	int n,rem,sum=0,temp;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	while(n!=0){
		sum+=fact(n%10);
		n/=10;
	}
	if(temp==sum)	// check for 145 
		printf("done");
	else
		printf("not done");
	return 0;
}
int fact(int num){
	if(num==0||num==1)
		return num;
	else
		return num*fact(num-1);
}