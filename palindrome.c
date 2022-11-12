#include<stdio.h>
int palin(int);
int n;
int main(){
	int num,r;
	printf("Enter a num: ");
	scanf("%d",&num);
	n = num;
	r = palin(num);
	if(num==r)
		printf("\n%d is palindrome",num);	
	else
		printf("\n%d is not palindrome",num);	
	return 0;
}
int ans=0;
int palin(int num){
	
	if(num){
		ans = ans*10+(num%10);
		palin(num/10);
	}
	if(n==ans)
		return ans;
	else
		return 0;
}
