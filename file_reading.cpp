#include<iomanip>
#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
	int rl,s1,s2,s3,tot;
	char name[20];
	public:
	void setinfo()
	{
	   cout<<"\nRoll no      : ";
	   cin>>rl;
	   cout<<"\nName         : ";
	   cin>>name;
	   cout<<"\nPhysics      : ";
	   cin>>s1;
	   cout<<"\nChem         : ";
	   cin>>s2;
	   cout<<"\nMaths        : ";
	   cin>>s3;
	   tot = s1+s2+s3;	
	}	
	void dispinfo()
	{
		cout<<"\nRoll no     : "<<rl;
		cout<<"\nName        : "<<name;
		cout<<"\nPhysics     : "<<s1;
		cout<<"\nChem        : "<<s2;
		cout<<"\nMaths       : "<<s3;
		cout<<"\nTotal       : "<<tot;
	}
	int dipsinfo();
};
int main()
{
	char cho;
	ofstream file1;
	file1.open("student.txt",ios::in|ios::binary);
	student x;
	do
	{
		file1.read((char *)&x,sizeof(x));
	    if (file1.eof())
	    break;
			x.dispinfo();
		cout<<"\nDo you want to add next info ? (y/n)";
		cin>>cho;
	}while(cho=='y');
	file1.close();
}
