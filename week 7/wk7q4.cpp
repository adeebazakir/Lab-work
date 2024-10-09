#include<iostream>
using namespace std;

	class pntr_obj
	{
		private :
		int roll_no;
		string fname;
		
		public:
		void set_data(int roll,string name)
		{
			this->roll_no=roll;
			this->fname=name;
		}
		void print()
		{
			cout<<"Object invoked by  "<<this<<endl;
		    cout<<"roll no = "<<this->roll_no<<endl;
		    cout<<"name = "<<this->fname<<endl;
		
		}
	};
	
int main()
{
	pntr_obj obj1;
	pntr_obj obj2;
	pntr_obj obj3;
	int rollno;
	string name;
	cout<<"enter roll no. and name for object 1 "<<endl;
	cin>>rollno;
	cin>>name;
	obj1.set_data(rollno,name);
	obj1.print();
	cout<<"enter name and roll no. for object 2 "<<endl;
	cin>>rollno;
	cin>>name;
	obj2.set_data(rollno,name);
	obj2.print();
	cout<<"enter name and roll no. for object 3 "<<endl;
	cin>>rollno;
	cin>>name;
	obj3.set_data(rollno,name);
	obj3.print();
	
}
