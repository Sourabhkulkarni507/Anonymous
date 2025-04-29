#include<iostream>
using namespace std;
int main()
{
	int i,arr[5],lrg,sml;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter the array : ";
		cin>>arr[i];
	}
	 lrg = arr[i];
	 for(i=0;i<5;i++)
	 {
	 	if(lrg<arr[i])
	 	lrg = arr[i];
	 }
	 sml = arr[0];
	 for(i=0;i<5;i++)
	 {
	 	if(arr[i]<sml)
	 	sml = arr[i];
	 }
	  cout<<"\n the largest no in the array is  : "<<lrg;
	  cout<<"\n the smallest no in the array is : "<<sml;
}
