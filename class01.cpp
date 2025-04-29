#include<iostream>
using namespace std;

class item
{
	private : 
	int no,qnt,rate,amt;
	char name[20];
	public :
		
		void input()
		{
			cout<<"\nEnter item no    : ";
			cin>>no;
		    cout<<"\nEnter item name  : ";
		    cin>>name;
		    cout<<"\nEnter quantity   : ";
			cin>>qnt;
			cout<<"\nEnter rate       : ";
			cin>>rate;
		    amt = qnt*rate;
		    cout<<"\ntotal amount       : "<<amt;
		    cout<<"\n=============================";
		    
		}
		void output()
		{
			cout<<"\nItem no          : "<<no;
			cout<<"\nName             : "<<name;
			cout<<"\nQuantity         : "<<qnt;
			cout<<"\nRate             : "<<rate;
			cout<<"\ntotal amount     : "<<amt;
			cout<<"\n========================================";
		}
};
      int main()
      {
      	item itm1,itm2,itm3;
      	itm1.input();
      	itm2.input();
      	itm3.input();
      	
      	itm1.output();
      	itm2.output();
      	itm3.output();
	  }
