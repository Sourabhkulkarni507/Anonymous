#include<conio.h>
#include<iostream>
using namespace std;
class student
{
	private :
		int rollno;
		char name[20];
		 static int totobj;
	public :
		student()
		{
		//	totobj++;
		}
		int setinfo()
		{
			cout<<"\nEnter Roll no : ";
			cin>>rollno;
			cout<<"\nEnter name    : ";
			cin>>name;
				totobj++;
		}
		int dispinfo()
		{
			cout<<"\nRoll No      : "<< rollno;
			cout<<"\nName         : "<<name;
			cout<<"\nTotal no of objects is "<<totobj;
			cout<<"\n================================";
			getch();
		}
};
int student::totobj;
int main()
{
	student obj1;
	obj1.setinfo();
	obj1.dispinfo();
	
	student obj2;
	obj2.setinfo();
	obj2.dispinfo();
	student obj3;
	obj3.setinfo();
	
	student list[10];
	
	obj1.dispinfo();
	obj2.dispinfo();
	obj3.dispinfo();
}

