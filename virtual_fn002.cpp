#include<iostream>
using namespace std;
class obj1
{	
    private : 
        int s1,s2,s3,s4,tot;
		float per; 
	public :
	void set_obj1()
	{
		cout<<"\n\tEnter marks according to given subjects.";
		cout<<"\nPhysics    : ";
		cin>>s1;
		cout<<"\nChemistery : ";
		cin>>s2;
		cout<<"\nMaths      : ";
		cin>>s3;
		cout<<"\nLanguage   : ";
		cin>>s4;
		tot = s1+s2+s3+s4;
		per = tot/4.0;
	}
	void disp_obj1()
	{
        cout<<"\nPhysics    :   "<< s1;
		cout<<"\nChemistery :   s"<< s2;
		cout<<"\nMaths      :   "<< s3;
		cout<<"\nLanguage   :   "<< s4;
		cout<<"\nTotal      :   "<< tot;
		cout<<"\npercentage :   "<< per;
		cout<<"\n================================";
	}
}; 
   class obj2
   {
   	private :
   		char name[20],city[20];
   	public :
   		void set_obj2()
		   {
		   	 cout<<"\nEnter Your name    :  ";
		   	 cin>>name;
		   	 cout<<"\nEnter your city     :  ";
		   	 cin>>city;
		   	 
	       }   		
   		void disp_obj2()
   		{
			cout<<"name        : "<<name;   
			cout<<"city        : "<<city;	
		}
   };
   int main()
   {
   	 obj1 x;
   	 obj2 y;
   	// x.set_obj1();
   	 y.set_obj2();
   //	 x.disp_obj1();
   	 y.disp_obj2();
   }
