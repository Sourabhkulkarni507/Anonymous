#include<iostream>
using namespace std;
 class student
 {
 	private : 
 	    int s1,s2,s3,rl,tot;
 		float per;
 		char name[20];
 		public :
 			void setdata()
 			{
 			   	cout<<"\nEnter name      : ";
	         	cin>>name;
	         	cout<<"\nEnter roll no   : ";
	        	cin>>rl;
	         	cout<<"\nPhysics         : ";
	        	cin>>s1;
	        	cout<<"\nChem            : ";
	         	cin>>s2; 
	         	cout<<"\nMaths           : ";
	        	cin>>s3;
		        cout<<"\n==================================";
		        tot= s1+s2+s3;
	        	per=tot/3.0;	
		    }
		    void dispdata()
		    {
		    	cout<<"\n name     : "<<name;
	        	cout<<"\nroll no   : "<<rl;
	           	cout<<"\nPhysics   : "<<s1;
	         	cout<<"\nChem      : "<<s2; 
	        	cout<<"\nMaths     : "<<s3;
	        	cout<<"\ntotal     : "<<tot;
	        	cout<<"\n%ge       : "<<per;
	         	cout<<"\n==================================";
			}
 };
 int main()
 {
 	student x[5];
 	int i;
 	for (i=0;i<5;i++)
 	{
 		x[i].setdata();
    }
    for (i=0;i<5;i++)
    {
    	x[i].dispdata();
	}
 }
