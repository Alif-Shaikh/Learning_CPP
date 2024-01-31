#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, string password)
    {
        this->name = name;
        this->salary = salary;
        this->password= password;
    }

    void emp()
    {
        cout << "The name of our 1st employee is " << this->name << " and his salary is " << this->salary << endl;
    }
    void gettingPass()
    {
        cout<<"password is : "<<this->password<<endl;
    }
private:
   string password;
};
  

  class Programmer : public Employee
  {
public:
int errors;
  };


int main()
{
    Employee har("ALIF", 50000, "sda848ds");
    // har.name="ALIF";
    // har.salary=50000;
    // cout<<"The name of our 1st employee is "<<har.name<<" and his salary is "<<har.salary<<endl;
    har.emp();
    cout<<"name is : "<<har.name<<endl;
   // cout<<"password is : "<<har.password<<endl;   //error
   har.gettingPass();
}