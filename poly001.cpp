#include<conio.h>
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
	base *obj1[10];
	int a,cho;
	commerce obj2;
	science obj3;
	a=0;
	do
	{
		cout<<"\n1. Commerce ";
		cout<<"\n2. Science  ";
		cout<<"\n3. Display List ";
		cout<<"\n4. Exit ";
		cout<<"\nEnter your choice ";
		cin>>cho;
		if(cho==1)
		{
			commerce *obj2;
			obj2= new commerce();
			obj1[a]= obj2;	
			obj1[a]->setinfo();
			obj1[a]->setmarks();
			a++;
		}
		else
		if(cho==2)
		{
			science *obj3;
			obj3=new science();
			obj1[a]= obj3;
			obj1[a]->setinfo();
			obj1[a]->setmarks();
			a++;
		}
		else
		if(cho==3)
		{
			for(int b=0;b<a;b++)
			{
				obj1[b]->dispinfo();
				obj1[b]->dispmarks();
				getch();
			}
		}
	}while(cho>=1 && cho<=3);
	
}

