#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int salary; 

    void emp()
    {
            cout<<"The name of our 1st employee is "<<this->name<<" and his salary is "<<this->salary<<endl;

    }
};

int main()
{
    Employee har;
    har.name="ALIF";
    har.salary=50000;
    // cout<<"The name of our 1st employee is "<<har.name<<" and his salary is "<<har.salary<<endl;
    har.emp();
} 