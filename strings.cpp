#include<iostream>
using namespace std;
int main()
{
string name="alif";
cout<<"My name is : "<<name<<endl;
cout<<"My name is : "<<name.length()<<endl;
cout<<"My name is : "<<name.substr(1,1)<<endl;//l
cout<<"My name is : "<<name.substr(0,1)<<endl;//a
cout<<"My name is : "<<name.substr(1,3)<<endl;//lif
cout<<"My name is : "<<name.substr(3)<<endl;

return 0;
}