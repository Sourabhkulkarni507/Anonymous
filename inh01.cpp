#include<iostream>
using namespace std;
class area
{
	private : 
	int a;
	protected :
	int r; 
	public:
	void input()
	{
		cout<<"\nEnter the radius of the circle : ";
		cin>>r;
		a = 3.14*r*r;
	}
	void output()
	{
		cout<<"\nGiven radius              : "<<r;
		cout<<"\n";
		cout<<"\nThe area of the circle is : "<<a;
		cout<<"\n";
	}
};
  class perimeter:public area
  {
  	private : 
  	int p;
	public :
	void dispper()
	
	{
	    p = 2*3.14*r;
		cout<<"\nThe perimater of the circle is : "<<p;	
		cout<<"\n===================================================";
    } 
  };
  int main()
  {
  	 perimeter x;
	   x.input();
	   x.output();
	   x.dispper(); 
  }
