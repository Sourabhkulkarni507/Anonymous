#include<iostream>
using namespace std;
int main()
{
	int bs,bonus,tot;
	char grade;
	cout<<"\nEnter salary  : ";
	cin>>bs;
	cout<<"\nEnter grade   : ";
	cin>>grade;
	if(grade=='a')
	{
		bonus = bs;
		cout<<bonus;
	}
	if(grade=='b')
	{
		bonus = 0.7*bs;
		cout<<bonus;
	}
	if(grade=='c')
	{
		bonus = 0.4*bs;
		cout<<bonus;
	}
}
