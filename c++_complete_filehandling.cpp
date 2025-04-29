#include<conio.h>
#include<iomanip>
#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;
 class student 
 {
 	private:
 		int rollno,s1,s2,s3,tot;
 		char name[20];
 	public:
	 void setinfo()
	 {
		cout<<"\nRoll no     : ";
		cin>>rollno; 
		cout<<"\nEnter name  : ";
		cin>>name;
		cout<<"\nPhysics     : ";
		cin>>s1;
		cout<<"\nChem        : ";
		cin>>s2;
		cout<<"\nMaths       : ";
		cin>>s3;
		cout<<"\n==================================";	
	 }	
	 void dispinfo()
	 {
	 	cout<<"\nRoll no     : "<<rollno;
	 	cout<<"\nName        : "<<name;
		cout<<"\nphysics     : "<<s1;
		cout<<"\nChem        : "<<s2;
		cout<<"\nMaths       : "<<s3;
		cout<<"\nTotal       : "<<s1+s2+s3; 
		tot=s1+s2+s3;
	 }
	 void listinfo()
	 {
	 	tot=s1+s2+s3;
	 	cout<<"\n"<<setw(8)<<rollno<<setw(20)<<name<<setw(8)<<s1<<setw(8)<<s2<<setw(8)<<s3<<setw(8)<<tot;
	 }
	 int getrollno()
	 {
	 	return rollno;
	 }
	 char* getname()
	 {
	 	return name;
	 }
 		
 };


int addinfo();
int displayinfo();
int list_info();
int search_by_rollno();
int search_by_name();
int go_to_recordno();
int first_reco();
int last_reco();
int edit_info();
int delete_info();
int fileinfo();

int main()
{
	int cho;
	do
	{
		cout<<"\n\t\tStudent Information System ";
		cout<<"\n\t\t===========================";
		cout<<"\n\t1. Add Info ";
		cout<<"\n\t2. Display Info ";
		cout<<"\n\t3. List Info ";
		cout<<"\n\t4. Search by rollno ";
		cout<<"\n\t5. Search by name ";
		cout<<"\n\t6. Goto Record Number ";
		cout<<"\n\t7. Frist Recrod ";
		cout<<"\n\t8. Last Record ";
		cout<<"\n\t9. Edit Info ";
		cout<<"\n\t10. Delete Info ";
		cout<<"\n\t11. File Info ";
		cout<<"\n\t12. Exit";
		cout<<"\n\tEnter your choice  ";
		cin>>cho;
		switch(cho)
		{
			case 1:
				addinfo();
				break;
			case 2:
				displayinfo();
				break;
			case 3:
				list_info();
				break;
			case 4:
				search_by_rollno();
				break;
			case 5:
				search_by_name();
					break;
			case 6:
				go_to_recordno();
					break;
			case 7:
				first_reco();
			        break;
			case 8: 
				last_reco();			
			        break;
			case 9:	
			    edit_info();
			        break;
			case 10:
				delete_info();
			        break; 			  
			case 11:
				fileinfo();
				break;
		}
	}while(cho>=1 && cho<=11);
}

int addinfo()
{
	char cho;
	ofstream file1;
	file1.open("result.txt",ios::app|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	do
	{
		obj1.setinfo();
		file1.write((char *)&obj1,sizeof(obj1));
		cout<<"\nDo you want to add next record ?  ";
		cin>>cho;
	}while(cho=='y');
	file1.close();
}


int displayinfo()
{
	char cho;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	do
	{
		
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  break;
		obj1.dispinfo();
		
		cout<<"\nDo you want to display next record ?  ";
		cin>>cho;
	}while(cho=='y' && !file1.eof());
	file1.close();
}
int list_info()
{
	char cho;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	cout<<"\n=========================================================================================\n";
	cout<<setw(8)<<"Roll No"<<setw(20)<<"Name  "<<setw(8)<<"Physics "<<setw(8)<<"Chemistry "<<setw(8)<<"Maths "<<setw(8)<<"Total ";
	cout<<"\n=========================================================================================\n";
	do
	{
		
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  break;
		obj1.listinfo();
		
	}while( !file1.eof());
	file1.close();
cout<<"\n=========================================================================================\n";
}

int search_by_rollno()
{
	char cho;
	int tmpno,xyz=0;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	cout<<"\nRoll Number to display information   ";
	cin>>tmpno;
	while(!file1.eof())
	{
		
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  break;
		if(tmpno== obj1.getrollno())	
		{
			obj1.dispinfo();	
			xyz=1;
		}
		
		
	
	}
	if(xyz==0)
	{
		cout<<"\n\nRecord Not Found "<<endl;
	}
	file1.close();
}
int search_by_name()
{
	char cho,tmpname[20];
	int xyz=0;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	cout<<"\nName to display information   ";
	cin>>tmpname;
	while(!file1.eof())
	{
		
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  break;
		if(strcmp(tmpname,obj1.getname())	==0)
		{
			obj1.dispinfo();	
			xyz=1;
		}
		
		
	
	}
	if(xyz==0)
	{
		cout<<"\n\nRecord Not Found "<<endl;
	}
	file1.close();
	
}
int go_to_recordno()
{
		char cho;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	int pos,tmpno;
	cout<<"\n\nEnter Record Number (line no) to display info : ";
	cin>>tmpno;
	pos=(tmpno-1)*sizeof(obj1);
	file1.seekg(pos,ios::cur);
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		{
			cout<<"\nRecord Not Found ";
			return 0;
		}
		  
		  
		obj1.dispinfo();
	file1.close();	
	
}
int first_reco()
{
	char cho;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  return 0;
		obj1.dispinfo();
	file1.close();	
}

	

int last_reco()
{
		char cho;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	int pos;
	pos=sizeof(obj1)*-1;
	file1.seekg(0,ios::end);
	file1.seekg(pos,ios::cur);
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  return 0;
		obj1.dispinfo();
	file1.close();	
}

int edit_info()
{
		char cho;
	int tmpno,xyz=0;
	fstream file1;
	file1.open("result.txt",ios::in|ios::out|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	cout<<"\nRoll Number to Edit  information   ";
	cin>>tmpno;
	while(!file1.eof())
	{
		
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  break;
		if(tmpno== obj1.getrollno())	
		{
			obj1.dispinfo();	
			cout<<"\n\nEnter new Information  \n";
			obj1.setinfo();
			file1.seekg(-sizeof(obj1),ios::cur);
			
			file1.write((char *)&obj1,sizeof(obj1));
			xyz=1;
		}
		
		
	
	}
	if(xyz==0)
	{
		cout<<"\n\nRecord Not Found "<<endl;
	}
	file1.close();

}

int delete_info()
{
	char cho;
	int tmpno,xyz=0;
	ifstream file1;
	ofstream file2;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	file2.open("temp.txt",ios::out|ios::binary);
	if(file2.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	
	student obj1;
	cout<<"\nRoll Number to delete  information   ";
	cin>>tmpno;
	while(!file1.eof())
	{
		
		file1.read((char *)&obj1,sizeof(obj1));
		if(file1.eof())
		  break;
		if(tmpno== obj1.getrollno())	
		{
			obj1.dispinfo();	
			cout<<"\n\nRecord deleted ....  \n";
			xyz=1;
		}
		else
		{
			file2.write((char *)&obj1,sizeof(obj1));
			
		}
		
		
	
	}
	if(xyz==0)
	{
		cout<<"\n\nRecord Not Found "<<endl;
	}
	file1.close();
file2.close();
remove("result.txt");
rename("temp.txt","result.txt");
}

int fileinfo()
{
		char cho;
	ifstream file1;
	file1.open("result.txt",ios::in|ios::binary);
	if(file1.fail())
	{
		cout<<"\n*** Unable to open file... ";
		return 0;
	}
	student obj1;
	int filesize,recsize,totreco;
	
	file1.seekg(0,ios::end);
	//file1.seekg
	filesize = file1.tellg();
	recsize=sizeof(obj1);
	totreco=filesize/recsize;
	cout<<"\n\n======================================================";
	cout<<"\n\t\tTotal Records : "<<totreco;
	cout<<"\n\t\tRecord Size   : "<<recsize;
	cout<<"\n\t\tFile Size     : "<<filesize;
	cout<<"\n\n======================================================";
	
	file1.close();	
	getch();
}
