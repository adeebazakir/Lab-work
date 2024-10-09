#include<iostream>
#include<cmath>
using namespace std;

int sum(int arr[],int size)
{
	int *ptr;
	ptr=arr;
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=*ptr;
		ptr++;
	}
	return sum;
}
int mean(int arr[],int size)
{
	int mean=(sum(arr,size))/size;
	return mean;
}
float standardDev(int arr[],int size)
{
	int meann=(mean(arr,size));
	float dev;
	float sum;
	int *ptr;
	ptr=arr;
	for(int i=0;i<size;i++)
	{
		sum+=(*ptr-meann)*(*ptr-meann);
	}
	dev=sqrt(sum/size);
	return dev;
}
int main()
{
	int n;
	cout<<"Enter value of n ";
	cin>>n;
	int array[n];
	cout<<"enter values in array : ";
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}

	cout<<"Sum = "<<sum(array,n)<<endl;
	cout<<"Mean = "<<(mean(array,n))<<endl;
	cout<<"Standard Deviation = "<<standardDev(array,n);
	
}
