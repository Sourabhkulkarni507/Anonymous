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
		}
		virtual int dispmarks()
		{
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
int main()
{
	base obj1,*ptr1;
/*	ptr1=&obj1;
	ptr1->setinfo();
	ptr1->dispinfo();
*/	
	
	commerce obj2,*ptr2;
	/*ptr2=&obj2;
	ptr2->setinfo();
	ptr2->setmarks();
	
	ptr2->dispinfo();
	ptr2->dispmarks();
	*/
	ptr1 = &obj2;
	ptr1->setinfo();
	ptr1->setmarks();
	ptr1->dispinfo();
	ptr1->dispmarks();
	
}

