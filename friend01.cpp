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
    	
    	void test();
    	void disp_tot();
    	friend student largest(student obj1,student obj2);
};
    	
    	student largest(student obj1,student obj2)
    	{
    	  if(obj1.tot > obj2.tot)
    	  {
    	   return obj1;
		  }
		  else
		  {
		  	return obj2;
		  }
    		
        }  
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
	
	x3 = largest(x1,x2);
	cout<<"\nHighest Marks obtained by.... ";
	x3.disp_tot();
	

}
