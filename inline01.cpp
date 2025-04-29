#include<iostream>
using namespace std;
inline int sum(int a,int b,int c)
{
	int d;
	d=a+b+c;
	return d;

}

int main()
{
	int ans;
	ans = sum(10,20,30);
	cout<<"\nAns = "<<ans;
	
	ans = sum(110,120,310);
	cout<<"\nAns = "<<ans;
	
	ans = sum(102,220,230);
	cout<<"\nAns = "<<ans;
	
}
