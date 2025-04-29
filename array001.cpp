#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[10],temp;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter the array : ";
		cin>>arr[i];
	}
    	cout<<"\nthe array in the descending order is :\n\n";
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
            	cout<<"\t "<<arr[i];	
	}
}
