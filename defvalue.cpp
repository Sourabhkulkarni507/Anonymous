// Default Argument
#include<iostream>
using namespace std;
int fun1(int a,int b=5)
{
	int c;
	c=a/b;
	return c;
}

int main()
{
	int a,b,c;
	cout<<"Enter a and b ";
	cin>>a>>b;
	c=fun1(a,b);
	cout<<"\nans = "<<c<<endl;
	
	c=fun1(a);
	cout<<"\n\n\nans = "<<c<<endl;
}

