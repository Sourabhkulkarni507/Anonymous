#include<iostream>
using namespace std;
struct book
{
   int pg,ch;
   char name[20],author[30];	
} ;
int main()
{
	struct book x[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter author          : ";
		cin>>x[i].author;
		cout<<"\nEnter book  name      : ";
		cin>>x[i].name;
		cout<<"\nEnter pages           : ";
		cin>>x[i].pg;
		cout<<"\nEnter no of  chapters : ";
		cin>>x[i].ch;
		cout<<"\n==================================="; 
	}
	for(i=0;i<5;i++)
	{
		cout<<"\nauthor                 : "<<x[i].author;
		cout<<"\nbook                   : "<<x[i].name;
		cout<<"\npages                  : "<<x[i].pg;
		cout<<"\nchapters               : "<<x[i].ch;
		cout<<"\n---------------------------------------------";
	}
}
