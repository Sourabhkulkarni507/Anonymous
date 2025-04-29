#include<stdio.h>
int main()
	void triangle();
/*{
	int arr1[10],arr2[10],no[10],i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the array : ");
		scanf("%d",&no[i]);
	}
	for(i=0;i<10;i++)
	{
		if(no[i]%2==0)
		{
			arr1[i]=no[i];
		}
		else
		arr2[i]=no[i];
	}
	printf("\nThe even array is : ");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr1[i]);
	}
	printf("\nThe odd array is : ");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr2[i]);
	}*/
	{
		printf("\n\t1.\ttriangle");
		printf("\n\t2.\tcircle");
		printf("\n\t3.rectangle");
		int l,b,r,ch;
		printf("\n Enter your option : ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
        	void triangle()
			break;
			case 2:
			void circle()
			break;
			case 3:
			void rectangle()
			break;	
			
		}
		void triangle()
		{
			int h,b,a;
			printf("\nEnter base   : ");
			scanf("%d",&b);
			printf("\nEnter height : ");
			scanf("%d",&h);
			a =0.5*b*h;
			printf("\nThe area of traingle is %d ",a);
		}
	}
	
}
