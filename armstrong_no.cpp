#include<iostream>
using namespace std;
int main()
{
	int no,r,temp,sum=0;
	cout<<"\nEnter the number : ";
	cin>>no;
	temp = no;
	while(n>0)
	{
		r=no%10;    
        sum=sum+(r*r*r);    
        n=no/10;  
	}
	if (temp==sum)
	{
		cout<<"\nGiven number is armstrong number .";
	}
	else
	{ 
	   cout<<"\nThe number is not armstrong number .";
	}
	
}
