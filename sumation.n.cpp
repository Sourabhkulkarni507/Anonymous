#include<stdio.h>
int main()
{
	int i,o,e;
	i=1;
	e=0;
	o=0;
	while(i<=100)
	{
		if(i%2==0)
			e=e+i;
		else
			o=o+i;
		i++;
	}

		printf("\n the sum of the all even nunbers is %d",e);
		printf("\n the sum of the all odd numbers is %d",o);
	
}
