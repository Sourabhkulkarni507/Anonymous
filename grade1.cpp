#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5;
	float per;
	cout<<"\nEnter physics marks : ";
	cin>>s1;
	cout<<"\nEnter chem marks : ";
	cin>>s2;
	cout<<"\nEnter maths marks : ";
	cin>>s3;
	cout<<"\nEnter english marks : ";
	cin>>s4;
	cout<<"\nEnter electronics marks : ";
	cin>>s5;
	per = (s1+s2+s3+s4+s5)/5;
	if(per>=60)
	{
		cout<<"\nthe student is in first division.";
	}
	else if(per>=50 && per<=59)
	{
		cout<<"\nthe student is in second division.";
	}
	else if (per>=40 && per<=49)
	{
		cout<<"\nthe student is in third division.";
	}
	else 
	{
		cout<<"\nthe student is fail.";
	}
}
