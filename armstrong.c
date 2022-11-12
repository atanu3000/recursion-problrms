#include<stdio.h>
#include<math.h>
void arms(int);

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	arms(num);
	return 0;
}

void arms(int num){
	int count=0,sum=0,t1,t2;
	t1=num,t2=num;
	while(t1!=0){
		++count;
		t1/=10;
	}
	while(t2!=0){
		sum+=pow((t2%10),count);
		t2/=10;		
	}
	if(num==sum){
		printf("\nArmstrong");
	}
	else
		printf("\nNot armstrong");
}