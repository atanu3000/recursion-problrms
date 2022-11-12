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
int ans=0;
int rev(int num)
{	
	if(num!=0){
		int rem = num%10;
		ans=ans*10+rem;
		rev(num/10);			
	}
	
	return ans;
}
