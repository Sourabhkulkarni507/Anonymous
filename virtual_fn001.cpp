#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print(){cout<< "\nPrint base class"; }
		void show(){cout<<"\nshow base class";}		
};
class derived:public base
 {
 	public:
 		void print(){cout<<"\nPrint base class";}
 } ;
 int main()
 {
    base* x;
    derived d;
    x = &d;
    x->print();
    x->show();
 }
