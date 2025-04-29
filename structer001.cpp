#include<iostream>
using namespace std;
 int main()
 {
 	struct student
 	{
 		int s1,s2,s3,rl,tot;
 		float per;
 		char name[20];
	};
	struct student x[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"\nEnter name      : ";
		cin>>x[i].name;
		cout<<"\nEnter roll no   : ";
		cin>>x[i].rl;
		cout<<"\nPhysics         : ";
		cin>>x[i].s1;
		cout<<"\nChem            : ";
		cin>>x[i].s2; 
		cout<<"\nMaths           : ";
		cin>>x[i].s3;
		cout<<"\n==================================";
		x[i].tot= x[i].s1+x[i].s2+x[i].s3;
		x[i].per=x[i].tot/3.0;
	}
		for(i=0;i<3;i++)
	{
		cout<<"\n name     : "<<x[i].name;
		cout<<"\nroll no   : "<<x[i].rl;
		cout<<"\nPhysics   : "<<x[i].s1;
		cout<<"\nChem      : "<<x[i].s2; 
		cout<<"\nMaths     : "<<x[i].s3;
		cout<<"\ntotal     : "<<x[i].tot;
		cout<<"\n%ge       : "<<x[i].per;
		cout<<"\n==================================";
	}
	
 }
