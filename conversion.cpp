#include<iostream>
using namespace std;
int x(int ,int);
int main()
{
	int h,m,t;
	cout<<"enter time in minutes : ";
	cin>>m;
	cout<<"enter time in hours   : ";
	cin>>h;
	t = x(m,h);
	cout<<"total time in minutes :"<<t;
	
}
   int x(int m,int h)
{
	int tot;
	tot = m+(60*h);
	return tot;
}
