// constant   Argument
#include<iostream>
using namespace std;
int fun1(int a,int b);
int main()
{
	int a,b,c;
	cout<<"Enter a and b ";
	cin>>a>>b;
	c=fun1(a,b);
	cout<<"\nans = "<<c<<endl;
}
int fun1(const int a,const int b)
{
	int c;
	c=a/b;
	return c;
}

