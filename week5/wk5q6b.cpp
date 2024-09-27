#include<iostream>
using namespace std;

int main()
{
	int r1,c1,r2,c2;
	cout<<"enter the row and column for array A: ";
	cin>>r1>>c1;
	cout<<"enter the row and column for array B: ";
	cin>>r2>>c2;
	while(c1!=r2)
	{
		cout<<"error! Column of first matrix not equal to rowof second matrix.";
		cout<<"enter the row and column for array A: ";
	    cin>>r1>>c1;
	    cout<<"enter the row and column for array B: ";
	    cin>>r2>>c2;
	
	}
	int arr1[r1][c1],arr2[r2][c2],arr3[r1][c2];
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
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<"enter the B"<<i+1<<j+1<<" element: ";
			cin>>arr2[i][j];
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			arr3[i][j]=0;
		}
	}
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for( int k=0;k<c1;k++)
			{
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
			}
			
		}
	}
	cout<<"elements in array C: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<arr3[i][j]<<" ";
			if(j==c2-1)
			{
				cout<<endl;
			}
		}
	}
}
