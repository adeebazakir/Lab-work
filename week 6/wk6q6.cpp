#include<iostream>
using namespace std;

int main()
{
	char str1[20],str2[20];
	cout<<"enter string 1 : ";
	cin>>str1;
	cout<<"enter string 2 : ";
	cin>>str2;
	char *p;
	p=str1;
	cout<<"Concatenation of two strings: ";
	while(*p!='\0')
	{
		cout<<*p;
		p++;
		if(*p=='\0')
		{
			cout<<" ";
			p=str2;
			while(*p!='\0')
			{
				cout<<*p;
				p++;
			}
		}
	}
}
