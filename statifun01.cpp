#include<iostream>
using namespace std;
class circle
{
	float radius;
	static float area;
	public :
		~circle()
		{
			cout<<"\nHave a nice day..... "<<endl;
		}
		static float getArea(float r)
		{
			area=r*r*3.141;
			return area;
		}
};
float circle::area;

int main()
{

	float ans;
	ans = circle::getArea(10);
	cout<<"\nArea of circle  "<<ans;
	
	ans = circle::getArea(5);
	cout<<"\nArea of circle  "<<ans;
	
	ans = circle::getArea(11);
	cout<<"\nArea of circle  "<<ans;
	
	circle c1,c2,c3;
	
	
}
