#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"number of elements you want in array 1: ";
	cin>>n1;
	cout<<"number of elements you want in array 2: ";
	cin>>n2;
	int arr1[n1],arr2[n2];
	cout<<"enter "<<n1<<" elements in array 1 in sorted order: "<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter "<<n2<<" elements in array 2 in sorted order: "<<endl;
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	int n3=n1+n2;
	int arr3[n3];
	int i=0,j=0;
	for(int k=0;k<n3;k++)
	{
		if(i<n1&&j<n2)
		{
			if(arr1[i]<arr2[j])
			{
				arr3[k]=arr1[i];
				i++;
			}
			else
			{
				arr3[k]=arr2[j];
				j++;
			}
		}
		else if(i<n1)
		{
			arr3[k]=arr1[i];
			i++;
		}
		else
		{
			arr3[k]=arr2[j];
			j++;
		}
	}
	
	for(int i=0;i<n3;i++)
	{
		cout<<arr3[i]<<" ";
	}	
}
