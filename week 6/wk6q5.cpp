#include<iostream>
using namespace std;

int main()
{
	char str[30];
	char* p;
	cout<<"Enter a string :";
	cin>>str;
	cout<<endl;
	p=str;
	cout<<"Printing the same string using pointer "<<endl;
	while(*p!='\0')
	{
		cout<<*p;
		p++;
	}
	
}
