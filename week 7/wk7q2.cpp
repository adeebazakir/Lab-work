#include<iostream>
#include<vector>
using namespace std;

int stringLength(vector <char> &str)
{
	char *ptr;
	ptr=str.data();     //pointer to first element of vector array
	int length;
	while (*ptr!='\0')
	{
		length++;
		ptr++;
	}
	return length;
}
int main()
{
	vector<char> string;
	char ch;
	cout<<"enter a string (press enter to stop) ";
	for(int i=0;i<100;i++)
	{
		cin.get(ch); //get a single character from user
		if(ch=='\n')
		{
			break;
		}
		string.push_back(ch);
	}
	string.push_back('\0');  //pushing a null character at the end of array 
	cout<<"Length of your string is "<<stringLength(string);
}
