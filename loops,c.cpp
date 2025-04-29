#include<stdio.h>
int main()
{
	int no;
	printf("\n While Loop\n");
	no=1;
	while(no<=10)
	{
		printf("\n No   =  %d",no);
		no++;
	}
	
	printf("\n For Loop\n");
	for(no=1;no<=10;no++)
	{
		printf("\n No   =  %d",no);
	}
	
	printf("\n Do While Loop\n");
	no=3451;
	do
	{
		printf("\n No   =  %d",no);
		no++;
	}while(no<=10);
}
