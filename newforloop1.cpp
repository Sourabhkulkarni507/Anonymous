#include<iostream>
using namespace std;
int main()
{
   int i,wt,ht,tot;
   for(i=0;i<10;i++)
   {
   	 cout<<"\nEnter the height of the student : ";
   	 cin>>ht;
   	 cout<<"\nEnter the weight of the student : ";
   	 cin>>wt;
   	 cout<<"\n======================================================";
   }
   if(ht>=165 && wt<=60)
   {
   	 tot = tot+1;
   }
   i++;
   cout<<"\ntotal no of the students is "<<tot;
  
}
