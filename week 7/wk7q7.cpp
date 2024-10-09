#include<iostream>
using namespace std;

class myClass
{
	public:
	string name;
	
	myClass(string n)
	{
		name=n;
	}
	
	myClass& pointerreference()
	{
		return *this;
		
	}
	
	
};
int main()
{
	string name;
	cout<<"enter a name : ";
	cin>>name;
	myClass obj(name);
	myClass& ref=obj.pointerreference();
	
	cout<<"value of data in object: "<<obj.name<<endl;
	cout<<"value of data in ref: "<<ref.name<<endl;
	cout<<"write a name: "<<endl;
	cin>>ref.name;
	cout<<"updated value of data in object: "<<obj.name<<endl;
	cout<<"updated value of data in ref: "<<ref.name<<endl;
	
}
