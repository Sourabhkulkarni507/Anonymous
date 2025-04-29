#include<iostream>
using namespace std;
int main()
{
   int no,rem,a,b,c,d,e;
	cout<<"\nenter the number  : ";
	cin>>no;
	if(no>=0 && no<=9 )
	cout<<"\nThe number is palindrome";
	if(no<=99 && no>=10)
	{
	rem = no%11;
	if(rem==0)
	cout<<"\nThe number is palindrome";
	else
	cout<<"\nThe number is not palindrome ";
    }
    if(no<=999 && no>=100)
    {
    	a = no/100;
    	b = no/10;
    	if(a==b)
    	cout<<"'\nThe number is palindrome";
    	else 
    	cout<<"\nThe number is not palindrome";
	}
	if(no<=9999 && no>=1000)
	{
		a=no/1000;
		b=no%10;
		c=(no%1000)/100;
		d=((no%1000)%100)/10;
		if(a==b && c==d)
		cout<<"\nThe number is palindrome";
		else
		cout<<"\nThe number is not palindrome";
		
	}
		if(no<=99999 && no>=10000)
	{
		a=no/10000;
		b=no%10;
		c=(no%10000)/1000;
		d=(((no%10000)%1000)%100)/10;
		if(a==b && c==d)
		cout<<"\nThe number is palindrome";
		else
		cout<<"\nThe number is not palindrome";
		
	}
}

