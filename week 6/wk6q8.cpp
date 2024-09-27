#include<iostream>
using namespace std;

int main()
{
	int arr[10],n,sum=0;
	cout<<"Enter 10 elements in your array: ";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Sum of how many elements - ";
	cin>>n;
	int* p;
	p=arr;
	for(int i=0;i<n;i++)
	{
		sum+=*p;
		p++;
	}
	cout<<"Sum of first "<<n<<" elements : "<<sum;

}
