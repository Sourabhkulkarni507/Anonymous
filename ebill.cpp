#include<iostream>
using namespace std;
class ebill
{
	private :
		int u;
	public : 
	void input()
	{
		cout<<"\nEnter unit   : ";
		cin>>u;
	}
	void charge()
	{
		int x;
		if(u>=0 && u<200)
		{
			x = 0.5*(u);
			cout<<"\n According to your unit your electricity cvharge is   : "<<x;  
		}
		else if(u>=201 && u<=400)
		{
			x = 100 +((u-200)*0.65);
			cout<<"\n According to your unit your electricity cvharge is   : "<<x;  
		}
		else if(u>=401 && u<=600)
		{
			x = 230 + ((u-400)*0.8);
			cout<<"\n According to your unit your electricity cvharge is   : "<<x;  
		}
		else
		{
			x = 390 + (600-u);
			cout<<"\n According to your unit your electricity cvharge is   : "<<x;  
		}
	}
};
int main()
{
	ebill a;
	a.input();
	a.charge();
}
