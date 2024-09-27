#include<iostream>
using namespace std;

int sum(int& a,int& b)
{
	return a+b;
}
int main()
{
	int x,y;
	cout<<"enter two numbers: ";
	cin>>x>>y;
	cout<<"Sum = "<<sum(x,y);
}
