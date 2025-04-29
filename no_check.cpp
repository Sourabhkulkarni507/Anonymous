#include<stdio.h>
int main()
{
	int i,no,rem;
	do{
		printf("\nEnter the no : ");
		scanf("%d",&no);
		rem = no%2;
		i++;
	}while(rem==0);
}
