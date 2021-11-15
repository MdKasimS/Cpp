#include<iostream>
using namespace std;


class Employee
{
    int id;
    string name;
    static int count;

    public:

    Employee()
    {
       ++count;
    }    

    Employee(string n, int i)
    {
        name=n;
        id=i;
        ++count;
    }

    void setName(string n)
    {
        name=n;
    }

    string getName()
    {
        return name;
    }

    void setId(string msg)
    {
        cout<<msg<<endl;
        cin>>id;
    }

    int getId()
    {
        return id;
    }

    int countObjects()
    {
        return count;
    }
};

class Programmer:public Employee
{
    string job_role="Programmer";

    public:

    Programmer()
    {
        setId("Enter Programmer Id : ");
        setName("Kasim Sache");
    }

    string getJobRole()
    {
        return job_role;
    }
};

class Manager:public Employee
{
    public:

    Manager()
    {
        setId("Enter Manager Id : ");
        setName("Rajat Mishra");
    }

};


int Employee::count;

int main()
{
    Programmer prm;
    Employee obj;
    Employee *obj1=new Employee("Rajesh Sharma", 50);

    obj.setId("Enter Employee ID : ");    
    obj.setName("Rebelo Martin");
    
    cout<< "Employee Name : "<< obj.getName()<< endl;
    cout<< "Employee Id : "<< obj.getId()<< endl;
//    cout<< "Number of objects : "<<obj.countObjects()<< endl;

    cout<< "Employee Name : "<< obj1->getName()<< endl;
    cout<< "Employee Id : "<< obj1->getId()<< endl;
//    cout<< "Number of objects : "<<obj1->countObjects()<< endl;

    cout<< "Employee Name : "<< prm.getName()<< endl;
    cout<< "Employee Id : "<< prm.getId()<< endl;
//    cout<< "Number of objects : "<< prm.countObjects()<< endl;


    return 0;
}