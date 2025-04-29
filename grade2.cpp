#include<iostream>
 using namespace std;
 int main()
 {
 	int h,t;
 	float c;
 	cout<<"Enter hardeness of the steel : ";
 	cin>>h;
 	cout<<"\nEnter carbon content         : ";
 	cin>>c;
 	cout<<"\nEnter tensile strength       : ";
 	cin>>t;
 	if(h>=50 && c<=0.7 && t>=5600 )
 	{
 		cout<<"\nGrade 10 steel .";
	}
	else if(h>=50 && c<0.7 && t<5600 )
	{
			cout<<"\nGrade 9 steel .";
	}
	else if(h<50 && c<0.7 && t<5600 )
	{
	    	cout<<"\nGrade 8 steel .";
	}
	else if(h>=50 && c>0.7 && t<5600 )
	{
			cout<<"\nGrade 7 steel .";
	}
	else if(h>=50 || c<=0.7 || t>=5600 )
	{
		   cout<<"\n grade 6 steel . ";
	}
	else
	{
		cout<<"\ngrade 5 steel .";
	}
	
 }
