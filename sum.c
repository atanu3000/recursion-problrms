#include<stdio.h>

void even_odd(int, int);

int main()
{
	int r1, r2;
	printf("Input a range: ");
	scanf("%d %d",&r1,&r2);
	
	even_odd(r1,r2);
		
	return 0;
}

void even_odd(int n1, int n2)
{	int sum1=0,sum2=0;
	
	if(n1<=n2){
		if ((n1%2)==0 )
	{
		printf("even: %d \t",n1);
		sum1+=n1;
	} 
	if ((n1%2)!=0 )
	{
		printf("odd: %d \n",n1);
		sum2+=n1;
	}
	
	even_odd(n1+1,n2);
	}
}


	


