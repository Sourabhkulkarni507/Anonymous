#include<iostream>
using namespace std;
class matrix
{
	private :
		int mat[3][3];
	public :
		void setMatrix();
		void dispMatrix();
		matrix addMatrix(matrix obj);
		matrix subtractmatrix(matrix obj);	
};

void matrix::setMatrix()
{
   int r,c;
   for(r=0;r<3;r++)
   {
   	  for(c=0;c<3;c++)
   	  {
   	  	cout<<"\nEnter the no : ";
   	    cin>>mat[r][c];
	  }
	    cout<<"\n";
   }	
}

void matrix::dispMatrix()
{
    int r,c;
    
   for(r=0;r<3;r++)
   {
   	  for(c=0;c<3;c++)
   	  {
   	  	cout<<" "<<mat[r][c];
	  }
	    cout<<" \n ";
   }		
}
matrix matrix::addMatrix(matrix obj)
{
	matrix ans;
    int r,c;
    
   for(r=0;r<3;r++)
   {
   	  for(c=0;c<3;c++)
   	  {
   	  	ans.mat[r][c]=mat[r][c] + obj.mat[r][c];
	  }
	    
   }
   return ans;		
}
matrix matrix::subtractmatrix(matrix obj)
{
	matrix ans;
    int r,c;
    
   for(r=0;r<3;r++)
   {
   	  for(c=0;c<3;c++)
   	  {
   	  	ans.mat[r][c]=mat[r][c] - obj.mat[r][c];
	  }
	    
   }		
   return ans;
}

int main()
{
    matrix m1,m2,m3;
    cout<<"\nEnter Values for 1st Matrix \n";
	m1.setMatrix();
	cout<<"\nEnter Values for 2nd Matrix \n";
	m2.setMatrix();
	
	cout<<"\n\t\tMatrix  1 is \n ";
	m1.dispMatrix();
	cout<<"\n\t\tMatrix  2 is \n ";
	m2.dispMatrix();
	
	
	m3 = m1.addMatrix(m2);
	
	cout<<"\n\t\tMatrix 1 + Matrix  2 is \n ";
	m3.dispMatrix();
	m3 = m1.subtractmatrix(m2);
	cout<<"\n\t\tMatrix 1 - matrix 2 is \n";
	m3.dispMatrix();
	
}
