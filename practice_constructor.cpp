#include<iostream>
using namespace std;
 class ab
 {
 	public : 
    	int a,b;
 	 void set_ab()
 	 {
 	 	cout<<"\nEnter a : ";
 	 	cin>>a;
 	 	cout<<"\nEnter b : ";
 	 	cin>>b;
	 }
	 void disp_ab()
	 {
	 	cout<<"\nThe value of a is : "<<a;
	 	cout<<"\nThe value of b is : "<<b;
	 }
 };
  class cd:public ab
  {
  	public: 
  	int c,d;
	  void set_cd()
	  {
	  		cout<<"\nEnter c : ";
 	 	    cin>>c;
 	 	    cout<<"\nEnter d : ";
 	     	cin>>d;
	  }	
	  void disp_cd()
	  {
	  	cout<<"\nThe value of c is : "<<c;
	 	cout<<"\nThe value of d is : "<<d;
	  }
  };
  class ef:public cd
  {
  	private:
  		int e,f;
  	public: 
	  void set_ef()
	  {
	  		cout<<"\nEnter e : ";
 	 	    cin>>e;
 	 	    cout<<"\nEnter f : ";
 	     	cin>>f;
	  }	
	  void disp_ef()
	  {
	  	cout<<"\nThe value of e is : "<<e;
	 	cout<<"\nThe value of f is : "<<f;
	  }
  };
   int  main()
   {
   	  ab x;
   	  x.set_ab();
   	  x.disp_ab();
   	  
   	  cd y;
   	  y.set_cd();
   	  y.set_ab();
   	  cout<<"\n--------------------------------------------";
   	  y.disp_cd();
   	  y.disp_ab();
   	  
   	  ef z;
   	  z.set_cd();
   	  z.set_ab();
   	  z.set_ef();
   	  cout<<"\n--------------------------------------------";
   	  z.disp_cd();
   	  z.disp_ab();
   	  z.disp_ef();
   	  
   }
 
 
 
 
 
 
 
