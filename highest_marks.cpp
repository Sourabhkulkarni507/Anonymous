#include<string.h>
#include<iostream>
using namespace std;
class student
{
    private:
    	int s1,s2,s3,tot;
    	int rl;
		char name[20];
    public:
    	student operator >(student obj);
    	student operator <(student obj);
    	
    	void test();
    	void disp_tot();
    	
};
    	
        void student::test() 
    	{
    		cout<<"\nEnter roll no      : ";
    		cin>>rl;
    		cout<<"\nEnter name         : ";
    		cin>>name;
    		cout<<"\nPhysics            : ";
    		cin>>s1;
    		cout<<"\ncChemistry         : ";
    		cin>>s2;
    		cout<<"\nMaths              : ";
    		cin>>s3;	
    		tot = s1+s2+s3;
    		cout<<"\nTotal              : "<<tot;
    		cout<<"\n--------------------------------";	
		}
		student student::operator >(student obj)
		{
			student ans;
			ans.rl = obj.rl;
			strcpy(ans.name,obj.name);
			if(tot>obj.tot)
			{
			  ans.tot = tot;
			  ans.s1 = s1;
			  ans.s2 = s2;
			  ans.s3 = s3;
			}
			else
			{
				ans.tot = obj.tot;
				ans.s1 = obj.s1;
				ans.s2 = obj.s2;
				ans.s3 = obj.s3;
			}
			return ans;
		}
		void student::disp_tot()
		{
			cout<<"\nRoll No   "<<rl;
			cout<<"\nName      "<<name;
			cout<<"\nTotal physics marks  : "<<s1;
			cout<<"\nTotal chem marks     : "<<s2;
			cout<<"\ntotal maths marks    : "<<s3;
			cout<<"\nTotal marks          : "<<tot;
		}
		
		

int main()
{

	       
	student x1,x2,x3;
	cout<<"\nFor TEST 1 : ";
	x1.test();
	cout<<"\nFor TEST 2 : ";
	x2.test();
	x3 =(x1>x2);
	cout<<"\nThe highest marks is....";
	x3.disp_tot();
	

}
