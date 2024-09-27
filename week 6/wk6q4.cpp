#include<iostream>
using namespace std;

int increment(int* p)
{
	return ++*p;
}
int decrement(int* p)
{
	return --*p;
}
int main()
{
	 int a;
	 cout<<"Enter a number - ";
	 cin>>a;
	 cout<<"calling the increment function : "<<increment(&a)<<endl;
	 cout<<"calling the increment function : "<<increment(&a)<<endl;
	 cout<<"calling the decrement function : "<<decrement(&a)<<endl;
	 cout<<"calling the decrement function : "<<decrement(&a)<<endl;
	  cout<<"calling the decrement function : "<<decrement(&a)<<endl;
	 cout<<"value of a is "<<a;
}
