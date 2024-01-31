#include<iostream>
using namespace std;
int add(int a , int b)
{
    int c=a+b;
    return c;
}
int main(){
    int n1,n2;
cout<<"Enter 1st num"<<endl;
cin>>n1;
cout<<"Enter 2nd num"<<endl;
cin>>n2;
cout<<"the funtion results to "<<add(n1,n2);
}