#include<iostream>
using namespace std;
int x(int,int,int);
int main()
{
	int p,n,r,i;
	cout<<"enter amount : ";
	cin>>p;
	cout<<"enter time   : ";
	cin>>n;
	cout<<"enter rate   : ";
	cin>>r;
	i = x(p,n,r);
	cout<<"total intrest : "<<i;
}
  int x(int p,int n,int r)
  {
  	int tot;
  	tot = p*n*r/100;
  	return tot;
  }
