#include<stdio.h>
int main()
{
	int i,j,mat[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the matrix : ");
			scanf("%d",&mat[i][j]);
			//printf(" %d ",mat[i][j]);
		}
	//	printf("\n");
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//printf("\nEnter the matrix : ");
			//scanf("%d",&mat[i][j]);
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}
}
