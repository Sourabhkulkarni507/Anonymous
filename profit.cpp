#include<stdio.h>
int main()
{
	int sp,cp,p,l;
	printf("\nEnter selling price :");
	scanf("%d",&sp);
	printf("\nEnter cost price :");
	scanf("%d",&cp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("\nseller made profit of %d",p);
	}
	else
	{
		l = cp-sp;
		printf("\n seller made loss of %d",l);
	}
}
