#include<iostream>
using namespace std;
int main()
{
	int a,b,q,rem;
	cout<<"\nEnter no 1 : ";
	cin>>a;
	cout<<"\nEnter no 2 : ";
	cin>>b;
	if(a==0 || b==0)
	{
		cout<<"\nDivision by 0 is not possible.";
	}
	else if (b>a)
	{
		q = b/a;
		rem = b%a;
		cout<<"\nQuotent is : "<<q;
		cout<<"\nrem is : "<<rem;
	}
	else
	{
			q = a/b;
		rem = a%b;
		cout<<"\nQuotent is : "<<q;
		cout<<"\nrem is : "<<rem;
	}
}
