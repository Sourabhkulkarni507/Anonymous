#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i,no;
	printf("\nEnter the number : ");
	scanf("%d",&no);
	for(i=0;i<10;i++)
	{
		printf("\nThe new numbers are %d ",no);
			no  = no+1;
	}
	cout<<"\nCongratulations you hacked NASA :)";
}
