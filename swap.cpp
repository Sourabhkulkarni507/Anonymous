#include<iostream>
using namespace std;
void swap(int *,int *);
int main()
{
	int a,b;
	cout<<"\nEnter the values of a & b  : ";
	cin>>a>>b;
	cout<<"\nThe values of a & b before swaping is "<<a<<" & "<<b;
	swap(&a,&b);
	cout<<"\nThe values of a & b after swaping is "<<a<<" & "<<b; 
}
     void swap(int *a,int *b ) 
     {
     	int c;
     	c = *a;
     	*a = *b;
     	*b = c;
     	 
	 }
