#include<iostream>
using namespace std;


void swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	swap(&a,&b);
	cout<<"after swapping value of a = " <<a<< "and b = " <<b;
}
