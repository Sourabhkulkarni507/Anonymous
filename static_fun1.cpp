#include<iostream>
using namespace std;
class student
{
//	static int tot;

	public:
	
	static int dispinfo( char name[],int rl,int s1,int s2,int s3)
	{
		//tot = s1+s2+s3;
		cout<<"\nname       : "<<name;
		cout<<"\nroll no    : "<<rl;
		cout<<"\nPhysics    : "<<s1;
		cout<<"\nChem       : "<<s2;
		cout<<"\nMaths      : "<<s3;
		//cout<<"\nTotal      : "<<tot;
		cout<<"\n========================";
		//return tot;
	}
};
//student::tot;
int main()
{
	int rl,s1,s2,s3,ans,x;
	char name[20];
	cout<<"\nEnter name          : ";
	cin>>name;
	cout<<"\nEnter roll no       : ";
	cin>>rl;
	cout<<"\nPhysics             : ";
	cin>>s1;
	cout<<"\nChem                : ";
	cin>>s2;
	cout<<"\nMaths               : ";
	cin>>s3;
	 ans = student::dispinfo(name,rl,s1,s2,s3);
	 cout<<"\nInformation \n"<<ans;
}
