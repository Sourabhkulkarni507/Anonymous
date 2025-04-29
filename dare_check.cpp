#include<iostream>
using namespace std;
int main()
{
	int d,m,y,rem;
	cout<<"\nEnter date  : ";
	cin>>d;
	cout<<"\nenter month : ";
	cin>>m;
	cout<<"\nEnter year  : ";
	cin>>y;
	rem = y%4;
	if(d==29 && m==2 && rem==0)
	{
		cout<<"\nValid date .";
	}
    else if(d==31 && m==6||m==9||m==4||m==11)
	{
		cout<<"\nInalid date .";
	}
	 else if (d<=30 && m==4||m==6||m==9||m==11)
	 {
	 	cout<<"\nValid date .";
	 }
    else if(d<=31 && m==1||m==3||m==5||m==7||m==9||m==10||m==12)
    {
    	cout<<"\nValide date.";
	}
	 else if(d<=28 && m==2)
	 {
	 	cout<<"\nValid date .";
	 }
	 else
	 {
	 	cout<<"\nInvalid date .";
	 }
}
