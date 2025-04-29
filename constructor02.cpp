#include<iostream>
#include<string.h>
using namespace std;
class base
{
	private : 
	char name[20],city[20];
	public:
	int rl;
		void setinfo()
		{
			cout<<"\nEnter the name     : ";
			cin>>name;
			cout<<"\nEnter the roll no  : ";
			cin>>rl;
			cout<<"\nEnter city name    : ";
			cin>>city;
			cout<<"\n----------------------------------";
		}
		void dispinfo()
		{
			cout<<"\nName            : "<<name;
			cout<<"\nRoll no         : "<<rl;
			cout<<"\nCity            : "<<city;
			cout<<"\n-----------------------------------";
		}
};
  class science:public base
  {
  	private :
  		int s1,s2,s3,tot;
  	public:
  		void setmarks()
  		{
  			cout<<"\nEnter physics marks : ";
  			cin>>s1;
  			cout<<"\nEnter chem maeks    : ";
  			cin>>s2;
  			cout<<"\nEnter maths marks   : ";
  			cin>>s3;
  			tot = s1+s2+s3;
  			cout<<"\n--------------------------------";
	    }
	    void getrollno()
        {
		  cout<<"\nEnter the roll no : ";
		  cin>>rl;
		}
	    void dispmarks()
	    {
	    	cout<<"\nroll no    : "<<rl;
	    	cout<<"\nChysics      : "<<s1;
	    	cout<<"\nChem       : "<<s2;
	    	cout<<"\nMaths      : "<<s3;
	    	cout<<"\nTotal      : "<<tot;
	    	cout<<"\n-------------------------";
		}
		
  };	
  class commerce: public base
  {
  	private:
  		int s1,s2,s3,tot;
  	public:
  		void com_mrks()
  		{
  		   cout<<"\nEnter SP marks     : ";
	       cin>>s1;
		   cout<<"\nEnter acc marks    : ";
		   cin>>s2;
		   cout<<"\nEnter bm marks     : ";
		   cin>>s3;
		   tot=s1+s2+s3;
		   cout<<"\n------------------------------";	
		}
		void disp_com()
		{
			cout<<"\nSP    : "<<s1;
			cout<<"\nacc   : "<<s2;
			cout<<"\nbm    : "<<s3;
			cout<<"\ntotal : "<<tot;
		}
  };
  int main()
  {
  	commerce x1,x2;
	  
	x1.setinfo();
	x1.dispinfo();
	x1.com_mrks();
	x1.disp_com();
	x2.setinfo();
	x2.dispinfo();
	x2.com_mrks();
	x2.disp_com();
	
	
	
	
	science y1,y2;
	y1.setinfo();
	y1.setmarks();
	y1.dispmarks();
	y2.setinfo();
	y2.setmarks();
	y2.dispmarks();
	

  } 
