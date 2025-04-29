#include<iostream>
using namespace std;
int main()
{
	int rl,s1,s2,s3,tot,ch;
	float per;
	char name[20];
	FILE *f1;
	f1 = fopen("c++_std.txt","a");
	do
	{
      cout<<"\nEnter roll no       : ";
	  cin>>rl;
	  cout<<"\nEnter name          : ";
	  cin>>name;
	  cout<<"\nPhysics             : ";
	  cin>>s1;
	  cout<<"\nChem                : ";
	  cin>>s2;
	  cout<<"\nMaths               : ";
	  cin>>s3;
	  
	  tot = s1+s2+s3;
	  per = tot/3.0;
	  fprintf<<f1,"rl name s1 s2 s3 tot per ",rl,name,s1,s2,s3,tot,per;
	  
	  cout<<"\nDo you want to add next record (y/n) ?  ";
	  fflush(stdin);
	  cin>>ch;	
	}while(ch=='y');
	fclose(f1);
}
