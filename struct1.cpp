#include<iostream>
using namespace std;
int main()
{
struct salary
{
    int bs,bonus;
	char grade;
};
 struct salary x[10];
   int i,tot=0;
   for(i=0;i<5;i++)
   {
    cout<<"\nEnter salary  : ";
	cin>>x[i].bs;
	cout<<"\nEnter grade   : ";
	cin>>x[i].grade;
   }
    for(i=0;i<5;i++)
    {

   if(x[i].grade=='a')
   {
   	  x[i].bonus = x[i].bs;
   	  //x[i].tot=x[i].tot+x[i].bonus;
		cout<<"\n"<<x[i].bonus;
   }
   if(x[i].grade=='b')
   {
   	  x[i].bonus = 0.7*x[i].bs;
   	  //x[i].tot=x[i].tot+x[i].bonus;
		cout<<"\n"<<x[i].bonus;
   }
   if(x[i].grade=='c')
   {
   	  x[i].bonus = 0.4*x[i].bs;
   	 // x[i].tot=x[i].tot+x[i].bonus;
		cout<<"\n"<<x[i].bonus;
   }
   tot=tot+x[i].bonus;
	
 }

  cout<<"\nThe total bonus is "<< tot;
 
}
 
