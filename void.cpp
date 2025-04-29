#include<iostream>
using namespace std;

class person
{
	private : 
	int bd,age;
	char name[20],city[20],gen[6];
	public : 
	void setdata()
	{
		cout<<"\nEnter name            : ";
		cin>>name;
		cout<<"\nEnter city            : ";
		cin>>city;
		cout<<"\nEnter age             : ";
		cin>>age;
		cout<<"\nEnter gender          : ";
		cin>>gen;
		cout<<"\n==================================";
     }
     void dispdata()
     {
        cout<<"\nname            : "<<name;
		cout<<"\ncity            : "<<city;
		cout<<"\nage             : "<<age;
		cout<<"\ngender          : "<<gen;
		cout<<"\n==================================";
	 }
};

int main()
{
      person int1[2];
	   int i;
	for(i=0;i<2;i++)
	{
	    int1[i].setdata();
	}
	for(i=0;i<2;i++)
	{
		int1[i].dispdata();
	}
	
}
