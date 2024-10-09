#include<iostream>
#include<vector>
using namespace std;

int vowelCount(char *sptr)
{
	int count=0;
	while((*sptr)!='\0')
	{
		if ( *sptr == 'a' || *sptr == 'e' || *sptr == 'i' || *sptr == 'o' || *sptr == 'u'||
		*sptr == 'A' || *sptr == 'E' || *sptr == 'I' || *sptr == 'O' || *sptr == 'U') 
		{
			count++;
		}
		sptr++;
	}
	return count;
}
int main()
{
	char string[50];
	cout<<"enter your string ";
	cin.getline(string,50);
	cout<<endl;
	cout<<"total vowels = "<<vowelCount(string);
}
