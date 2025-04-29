#include<iostream>
using namespace std;
int swap1(int &a,int &b);
int main()
{
	int a,b;
	cout<<"Enter a and b ";
	cin>>a>>b;
	swap1(a,b);
	cout<<"\nAfter swap a ="<<a<<"\tb = "<<b<<endl;
}
int swap1(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nSwap Fun. a = "<<a<<"\tb = "<<b<<endl;
}

