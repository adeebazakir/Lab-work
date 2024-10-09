#include<iostream>
using namespace std;

class flight
{
	private:
		string flight_no;
		string source;
		string destination;
		float fare;
	
	public:
		flight(string fno,string src,string des,float f) //parametarized constructor
		{
			flight_no=fno;
			source=src;
			destination=des;
			fare=f;
		}
		
		void flight_info()  //function to display flight info using this pointer
		{
			cout<<"Displaying flight information"<<endl;
			cout<<"Flight No. - "<<this->flight_no<<endl;
			cout<<"Source- "<<this->source<<endl;
			cout<<"Destination - "<<this->destination<<endl;
			cout<<"Fare - "<<this->fare<<endl;
		}
};
int main()
{
	string fno;
	cout<<"Enter flight no - ";
	cin>>fno;
	string src;
	cout<<"Enter souce - ";
	cin>>src;
	string dest;
	cout<<"Enter destination - ";
	cin>>dest;
	float faree;
	cout<<"Enter fare - ";
	cin>>faree;
	cout<<endl;
	cout<<endl;
	flight f1(fno,src,dest,faree); //creating object with constructor values
	f1.flight_info();
	
}
