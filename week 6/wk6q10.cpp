#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *str)
{
	int len=strlen(str);
	char* start, *end,temp;
	start=str;
	end=str+len-1;
	for(int i=0;i<len/2;i++)
	{
		temp=*end;
		*end=*start;
		*start=temp;
		start++;
		end--;
	}
}
int main()
{
	char name[50]="abcdefghijklmnopqrstuvwxyz";
	cout<<"your string is "<<name;
	cout<<endl;
	reverse(name);
	cout<<"your reverse string is "<<name;
}
