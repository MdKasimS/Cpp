#include <iostream>
using namespace std;
struct Person
{
    string name;
    string gend;
    int age;
}typedef Person;


void print(Person &obj)
{
    cout<<obj.name<<obj.age<<obj.gend<<endl;
}

int main()
{
    Person p;

    p.name="Larry";
    p.gend="male";
    p.age=29;

    cout<<p.name<<"\n"<<p.gend<<"\n"<<p.age<<endl;

    cout<<"This is using reference variable : "<<endl;

    print(p);

    return 0;
}