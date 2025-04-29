#include<stdio.h>
int main()
{
	int r,c,i;
	r=1;
	while(r<=5)
	{
		c=1;
		while(c<=r)
		{
			i=i+1;
			printf("\t %d",i);
			c++;
		}
		printf("\n");
		r++;
	}
}
