#include<iostream>
using namespace std;

class a
{
	private: 
	int no;
	char name[30];
	public : 
	int qnt,amt,rate;
	void input()
	{
		cout<<"\nEnter the name of the item    : ";
		cin>>name;
		cout<<"\nEnter the id of the item      : ";
		cin>>no;
		cout<<"\nEnter the rate of the item    : ";
		cin>>rate;
		cout<<"\nEnter the available quantity  : ";
		cin>>qnt;
		cout<<"\n====================================================";
	}
	void output()
	{
		cout<<"\nName               : "<<name;
		cout<<"\nID                 : "<<no;
		cout<<"\nRate               : "<<rate;
		cout<<"\navailable quantity : "<<qnt;
		cout<<"\n---------------------------------------------------";
	}
};
  class b:public a
  {
  	public:
  	void dispdata()
  	{
  		amt = qnt*rate; 
  		 cout<<"\nthe total amount is : "<<amt;
  		cout<<"\n---------------------------------------------------";
    }
  };
  int main()
  {
  	b x[3];
  	int i;
  	for(i=0;i<3;i++)
  	{
  	   x[i].input();	
    }
    	for(i=0;i<3;i++)
    	{
    		x[i].output();
    		x[i].dispdata();
		}
  }
