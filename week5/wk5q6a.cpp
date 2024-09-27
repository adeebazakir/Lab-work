#include<iostream>
using namespace std;

int main()
{
     int r1,c1;
	cout<<"enter the row and column for array : ";
	cin>>r1>>c1;
	int arr1[r1][c1],arr2[r1][c1],arr3[r1][c1];
	cout<<"enter elements in array A: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<"enter the A"<<i+1<<j+1<<" element: ";
			cin>>arr1[i][j];
		}
	}
	cout<<"enter elements in array B: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<"enter the B"<<i+1<<j+1<<" element: ";
			cin>>arr2[i][j];
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	cout<<"elements in array C: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<arr3[i][j]<<" ";
			if(j==c1-1)
			{
				cout<<endl;
			}
		}
	}
}
