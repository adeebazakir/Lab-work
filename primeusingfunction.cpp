#include<iostream>
using namespace std;

bool prime(int a)
{
	bool flag;
	for(int i=2;i<a;i++)
	{
		flag=true;
		if(a%i==0)
		{
			return false;
			break;
		}		
	}
	return true;
}
int main()
{
	int n;
	cout<<"enter  number:";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		if(prime(i))
		{
			cout<<i<<" ";
		}
		
	}
}
