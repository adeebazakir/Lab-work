#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	bool flag;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The prime number between 1 and "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		count=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
}
