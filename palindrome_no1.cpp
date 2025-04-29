#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[20],b[20];
	cout<<"\n Enter string : ";
	cin>>a;
	strcpy(b,a);
	strrev(a);
	int c = strcmp(a,b);
	if(c == 0) {
			cout<<"\n It is a Palindrome ";
	}
	else {
		cout<<"\n Not a palindrome";
	}

}
