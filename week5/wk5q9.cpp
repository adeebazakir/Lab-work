#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	cout<<"Enter 10 numbers in your list: ";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	int number,freq=0;
	cout<<"Enter a number: ";
	cin>>number;
	
	for(int i=0;i<10;i++)
	{
		if(arr[i]==number)
		{
			freq++;
		}
	}
	if(freq==0)
	{
		cout<<"sorry the number you are finding is not in the list!";
	}
	else
	{
		cout<<"The freq of the number "<<number<<" in the list is: "<<freq;
	}
	
}
