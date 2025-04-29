#include<iostream>
using namespace std;
class area
{
	static int ar;
	public:
		static int  get_area(int l,int b)
		{
			ar = l*b;
			cout<<"\n l   : "<<l;
			cout<<"\n b   : "<<b;
			return ar;
		}
};
int area::ar;
int main()
{
	int l,b;
	int ans;
	cout<<"\nEnter length  : ";
	cin>>l;
	cout<<"\nEnter width   : ";
	cin>>b;
	ans = area::get_area(l,b);
	cout<<"\nThe area of the rectangle is : "<<ans;
}
