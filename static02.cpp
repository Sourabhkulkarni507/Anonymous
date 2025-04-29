#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		static int rollno;
		int s1,s2,s3,s4,s5,tot;
		float per;
		char name[20];
		public:
		int set_info()
		{
			cout<<"\nEnter name       : ";
			cin>>name;
			cout<<"\nphysics          : ";
			cin>>s1;
			cout<<"\nChem             : ";
			cin>>s2;
			cout<<"\nmaths            : ";
			cin>>s3;
			cout<<"\nELE              : ";
			cin>>s4;
			cout<<"\nLanguge          : ";
			cin>>s5;
			tot = s1+s2+s3+s4+s5;
			per = tot/5.0;
			rollno++;
		
		}
		int disp_info()
		{
		  cout<<"\nRoll no      : "<<rollno;	
		  cout<<"\nName         : "<<name;
		  cout<<"\nphysics      : "<<s1;
		  cout<<"\nchem         : "<<s2;
		  cout<<"\nMaths        : "<<s3;
		  cout<<"\nELE          : "<<s4;
		  cout<<"\nLanguage     : "<<s5;
		  cout<<"\nTotal        : "<<tot;
		  cout<<"\npercetnage   : "<<per;
		  cout<<"\n=================================";
		}				
};
        int student::rollno; 
        int main()
       {
       	 student x1,x2,x3;
       	 x1.set_info();
       	 x2.set_info();
       	 x3.set_info();
       	 
       	 x1.disp_info();
       	 x2.disp_info();
       	 x3.disp_info();
	   }
