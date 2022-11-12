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
{
	if ((n1%2)==0 && (n1<=n2))
	{
		printf("even: %d \t",n1);
	} 
	if ((n1%2)!=0 && (n1<=n2))
	{
		printf("odd: %d \n",n1);
	}
	even_odd(n1+1,n2);
}


	


