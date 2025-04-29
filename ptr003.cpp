#include<iostream>
using namespace std;
class base
{
	private :
		int rollno;
		char name[20];
	public :
		void setinfo()
		{
			cout<<"\nRoll No     ";
			cin>>rollno;
			cout<<"\nName        ";
			cin>>name;
			
		}
		void dispinfo()
		{
			cout<<"\nRoll No     "<<rollno;
			cout<<"\nName        "<<name;
		}
		virtual int setmarks()
		{
			cout<<"\nYou are in Setmarks virtual method";
		}
		virtual int dispmarks()
		{
			cout<<"\nYou are in dispmarks virtual method";
		}
};

class commerce:public base
{
	int s1,s2,s3,tot;
	public :
		int setmarks()
		{
			cout<<"\nAccounts      ";
			cin>>s1;
			cout<<"\nEconomics     ";
			cin>>s2;
			cout<<"\nHR            ";
			cin>>s3;
			tot=s1+s2+s3;
		}
		int dispmarks()
		{
			cout<<"\nAccounts      "<<s1;
			cout<<"\nEconomics     "<<s2;
			cout<<"\nHR            "<<s3;
			cout<<"\nTotal         "<<tot;
		}
};

class science:public base
{
	int s1,s2,s3,s4,tot;
	public :
		int setmarks()
		{
			cout<<"\nPhysics       ";
			cin>>s1;
			cout<<"\nChemistry     ";
			cin>>s2;
			cout<<"\nMaths         ";
			cin>>s3;
			cout<<"\nIT.           ";
			cin>>s4;
			tot=s1+s2+s3+s4;
		}
		int dispmarks()
		{
			cout<<"\nPhysics       "<<s1;
			cout<<"\nChemistry     "<<s2;
			cout<<"\nMaths         "<<s3;
			cout<<"\nIT.           "<<s4;
			cout<<"\nTotal         "<<tot;
		}
};

int main()
{
	base obj1,*ptr1;
	commerce obj2;
	science obj3;
	
	cout<<"\nCommerce object ref. is given to base class ptr ";
	ptr1 = &obj2;
	ptr1->setinfo();
	ptr1->setmarks();
	ptr1->dispinfo();
	ptr1->dispmarks();
	cout<<"\nScience object ref. is given to base class ptr ";
	ptr1 = &obj3;
	ptr1->setinfo();
	ptr1->setmarks();
	ptr1->dispinfo();
	ptr1->dispmarks();
	
}

