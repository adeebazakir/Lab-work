#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"how many elements you want in your array: ";
	cin>>n;
	float arr[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cout<<"enter your "<<i+1<<" element: ";
		cin>>arr[i];
	}
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"second largest element in the array is "<<arr[n-2];
}
