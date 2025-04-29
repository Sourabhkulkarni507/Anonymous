#include<iostream>
using namespace std;
class ab
{
	private:
    int a,b;
	public :
	  void set_ab()
	  {
	  	 cout<<"\nEnter a & b : ";
	  	 cin>>a>>b;
	  }
	  void disp_ab()
	  {
	  	cout<<"\nThe value of the a is "<<a<<"\tand b is "<<b; 
	  }
		
};

  class cd :virtual public ab 
  {
  	private :
  		int c,d;
    public :
    	void set_cd()
    	{
    		cout<<"\nEnter  c & d : ";
    		cin>>c>>d;
		}
		void disp_cd()
		{
			cout<<"\nThe value of c is "<<c<<"\t and d is "<<d;
		}
  };
  class ef:virtual public ab
  {
  	private:
  		int e,f;
    public:
    	void set_ef()
    	{
    		cout<<"\nEnter the values of e & f : ";
    		cin>>e>>f;
		}
		void disp_ef()
		{
			cout<<"\nThe value of e is "<<e<< "\t and f is "<<f;
		}
  };
  
  
  class  gh :public cd,public ef
  {
  	private : 
  	    int g,h;
  	public: 
  	void set_gh()
  	{
  	   cout<<"\nEnter the values of g & h : ";
	   cin>>g>>h;	
	}
	void disp_gh()
	{
	   cout<<"\nThe value of g is "<<g<<"\tand h is "<<h;
	}
  
  	
  };
  
  
  int main()
  {
 	gh obj1;
	 obj1.set_ab();
	 obj1.set_cd();
	 obj1.set_ef();
	 obj1.set_gh();
	 
	 obj1.disp_ab(); 	
  	obj1.disp_cd();
  	obj1.disp_ef();
  	obj1.disp_gh();
  }



