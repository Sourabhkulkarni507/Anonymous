#include<iostream>
#include<string.h>
using namespace std;

class base
{
	private:
		int rollno,s1,s2,s3,tot;
		char name[30],div[20],city;
	public: 
	base()
	{
		cout<<"\nThis is the default constructor .";
		strcpy(name,"Sourabh Kulkarni.");
		rollno = 4;
		strcpy(div,"a division");
		
	}
	void disp_info()
	{
		cout<<"\nname       : "<<name;
		cout<<"\nrollno     : "<<rollno;
		cout<<"\ndivision   : "<<div;
	}
		
};
    int main()
    {
    	base obj1; 
        obj1.disp_info();
	}
