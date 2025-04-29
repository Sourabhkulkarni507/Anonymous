#include<iostream>
using namespace std;
class matrix
{
	private:
	int mat[3][3];
	public:
		void set_matrix();
		void disp_matrix();
		matrix mul_matrix(matrix obj);	
};
void matrix::set_matrix()
{
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<"\nEnter number : ";
         	cin>>mat[r][c];
		}
	}
	
	
}
void matrix::disp_matrix()
{
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<mat[r][c];
		}
	}
}
matrix matrix::mul_matrix(matrix obj)
{
	matrix ans;
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			ans.mat[r][c] = mat[r][c]* obj.mat[r][c];
			
		}
	}
	return ans;
	
}
 int main()
 {
 	matrix m1,m2,m3;
    cout<<"\nEnter Values for 1st Matrix \n";
	m1.set_matrix();
	cout<<"\nEnter Values for 2nd Matrix \n";
	m2.set_matrix();
	
	cout<<"\n\t\tMatrix  1 is \n ";
	m1.disp_matrix();
	cout<<"\n\t\tMatrix  2 is \n ";
	m2.disp_matrix();
	
	
	m3 = m1.mul_matrix(m2);
	
	cout<<"\n\t\tMatrix 1 * Matrix  2 is \n ";
	m3.mul_matrix();
	
 }
