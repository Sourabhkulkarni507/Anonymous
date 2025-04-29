#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"\nEnter no 1 : ";
	cin>>a;
	cout<<"\nEnter no 2 : ";
	cin>>b;
	if(a<b)
	{
		cout<<b<<" is bigger number.";
	}
	else if(b<a)
	{
		cout<<a<<" is bigger number.";
	}
	else 
	{
		cout<<"both are equal.";
	}

}
