#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	int* add;
	add=&a;
	cout<<"You entered "<<a<<endl;
	cout<<"Address of a is "<<add<<endl;
}
