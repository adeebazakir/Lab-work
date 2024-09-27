#include<iostream>
using namespace std;

int main()
{
	int first, second,n,count,next;
	cout<<"Enter the number: ";
	cin>>n;
	first=0;
	second=1;
	count=1;
	cout<<first<<" ";
	cout<<second<<" ";
	while(count<n-1)
	{
		next=first+second;
		cout<<next<<" ";
		first=second;
		second=next;;
		count++;
	}
}
