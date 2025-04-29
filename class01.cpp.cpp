#include<iostream>
using namespace std;

class steel
{
	private : 
	int h,t;
	float c;
	public :
		void input()
		{
			cout<<"\nEnter hardness         : ";
			cin>>h;
			cout<<"\nEnter carbon content   : ";
			cin>>c;
			cout<<"\nEnter tensile strength : ";
			cin>>t;
		}
		void Get_grade()
		{
			if(c>=50 && c<=0.7 && t>=5600)
			cout<<"\nGrade 10 .";
			else if (c>=50 && c<=0.7 && t<5600)
			cout<<"\nGrade 9 .";
			else if(c<50 && c<=0.7 && t>=5600)
			cout<<"\nGrade 8 .";
			else if(c>=50 && c>0.7 && t>=5600)
			cout<<"\nGrade 7 .";
			else if(c>=50 || c<=0.7 || t>=5600)
			cout<<"\nGrade 6 .";
			else
			cout<<"\nGrade 5 .";
		}
};
int main()
{
	steel s1;
	
	s1.input();
	s1.Get_grade();
	
}
