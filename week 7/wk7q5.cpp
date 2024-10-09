#include<iostream>
using namespace std;

class greatestNumber
{
	private:
		int x;
		int y;
	
	public:
		void set_values(int a,int b)
		{
			this->x=a;
			this->y=b;
		}
		void larger()
		{
			if(this->x>this->y)
			{
				cout<<this->x<<" is greater.";
			}
			else if(this->x<this->y)
			{
				cout<<this->y<<" is greater.";
			}
			else
			{
				cout<<"both are equal.";
			}
		}
};

int main()
{
	greatestNumber obj1;
	int a,b;
	cout<<"enter a: ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
	obj1.set_values(a,b);
	cout<<"Greatest of both: "<<endl;
	obj1.larger();
}
