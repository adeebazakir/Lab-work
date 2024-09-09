#include<iostream>  
using namespace std;

#define N 10  
  
int main()  
{  
    int a[N], pos = 0, neg = 0, even = 0, odd = 0; 
  
    printf("Enter %d integer numbers\n", N);  
    for(int i = 0; i < N; i++)  
    {  
        cin>>a[i];   
        if(a[i] > 0)  
            pos++;  
        else if(a[i]<0)
            neg++;
			  
        if(a[i] % 2 == 0)  
            even++;  
        else  
            odd++;  
    }  
  
    cout<<"\nPositive:"<<pos<<endl;  
    cout<<"Negative: "<<neg<<endl;  
    cout<<"Even: "<<even<<endl;  
    cout<<"Odd: "<<odd<<endl;  
    return 0;  
}  
