#include<string.h>
#include<iostream>
using namespace std;
class base
{
	private :
		int rollno;
		char name[20];
		char clgname[20];
	public :
		base()
		{
			strcpy(clgname,"D.K.T.E.");
			rollno=0;
			strcpy(name,"");
			cout<<"\nYou are in default constructor "	;
		}	
		base(int rn,char nm[])
		{
			rollno=rn;
			strcpy(name,nm);
			strcpy(clgname,"D.K.T.E.");
			cout<<"\nYou are in para. constructor ";
		}
		int setinfo(int rn,char nm[])
		{
			rollno=rn;
			strcpy(name,nm);
		}
		int setinfo()
		{
			cout<<"\nRoll No     ";
			cin>>rollno;
			cout<<"\nName        ";
			cin>>name;
			
		}
		int dispinfo()
		{
			cout<<"\n\nCol. Name  "<<clgname;
			cout<<"\nRoll No     "<<rollno;
			cout<<"\nName        "<<name;
			
		}
};

int main()
{
	base obj1;
	base obj2(1,"anil");
	base obj3(2,"sunil");
	
	obj1.dispinfo();
	obj2.dispinfo();
	obj3.dispinfo();
	
	
}
