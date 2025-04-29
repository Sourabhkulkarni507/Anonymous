#include<iostream>
using namespace std;
int main() 
{
	int a,b,c;
	cout<<"\nEnter the sides of the triangle : ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		if(c+b>a)
			cout<<"\nThe given triangle is valid.";
		else
			cout<<"\nThe triangle is not valid";
	}
	   else if(b>a && b>c)
	{
		if(a+c>b)
			cout<<"\nThe given triangle is valid.";
		else
			cout<<"\nThe triangle is not valid";
	}
	if(c>a && c>b)
	{
		if(a+b>c)
			cout<<"\nThe given triangle is valid.";
		else
			cout<<"\nThe triangle is not valid";
	}
	
}

