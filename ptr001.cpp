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
};

int main()
{
	base obj1,*ptr1;
	ptr1=&obj1;
	
	
	ptr1->setinfo();
	ptr1->dispinfo();
}

