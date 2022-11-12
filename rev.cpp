#include<stdio.h>
int rev(int);
int main(){
	int n,r;
	printf("Enter a number: ");
	scanf("%d",&n);
	r = rev(n);
	printf("After reversing: %d",r);
	return 0;
}
int rev(int num)
{	
	int ans=0,rem;
	if(num){
		rem = num%10;
		ans=ans*10+rem;
		rev(num/10);
				
	}
	else
		return ans;
	return ans;
}