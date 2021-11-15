#include<iostream>

using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion()=0;
};

class Employee: AbstractEmployee
{
    string Name;
    string Company;
    int Age;
    double Salary;

    public:
    
    Employee(string n,string c, int a, double s)
    {
        Name=n;
        Company=c;
        Age=a;
        Salary=s;
    }

    Employee(){}

    void setCompany(string c)
    {
        Company=c;
    }
    void setAge(int a)
    {
        Age=a;
    }
    void setSalary(double s)
    {
        Salary=s;
    }
    void setName(string n)
    {
        Name=n;
    }

    string getCompany()
    {
        return Company;
    }
    string getName()
    {
        return Name;
    }
    double getSalary()
    {
        return Salary;
    }
    int getAge()
    {
        return Age;
    }

    void IntroducYourself()
    {
        cout<<"Name : "<<Name<<endl;
        cout<<"Company : "<<Company<<endl;        
        cout<<"Age : "<<Age<<endl;
    }

    double AddBonus(double bon)
    {
        Salary=Salary+bon;
        return Salary;
    }

    double TaxDeduction(double per)
    {
        Salary=Salary- Salary*(per/100);
        return Salary;
    }

    void AskForPromotion()
    {
        if(Age>30)
            cout<<"==> "<<Name<<" [Got promoted!]"<<endl;
        else    
            cout<<"==> "<<Name<<" [Sorry no promotion for you!]"<<endl;
    }    

    virtual void Work()
    {
        cout<<getName()<<" is checking emails and task backlog base in "<<getCompany()<<endl;
    }
};

class Developer: public Employee
{
    string FavProgrammingLanguage;

    public:
    Developer(string n,string c, int a, double s, string fpl):Employee(n,c,a,s)
    {
        FavProgrammingLanguage=fpl;

    }
    
    void FixBug()
    {
        cout<<getName()<<" is fixing bug using "<<FavProgrammingLanguage<<endl;
    }

    void Work()
    {
        cout<<getName()<<" is coding in "<<getCompany()<<endl;
    }

};


class Teacher:public Employee
{
    string Subject;

    public:
    Teacher(string n,string c, int a, double s,string sub):Employee(n,c,a,s)
    {
        Subject=sub;
    }
    
    void PrepareLesson()
    {
        cout<<getName()<<" is preparing lesson in "<<Subject<<endl;
    }

    void Work()
    {
        cout<<getName()<<" is teaching students in "<<getCompany()<<endl;
    }

};


int main(int argc, char* args[])
{
    cout<<"\n\n========= Bismillah-Irr-Rahman-Nir-Rahim =======\n\n";

    Employee e1=Employee("Mohammed Kasim","Microsoft", 24, 50000000);
    e1.IntroducYourself();
    e1.AskForPromotion();
    
    cout<<endl;

    Employee e2=Employee("Taufik","Cadila",25,60000000);
    e2.IntroducYourself();
    e2.AskForPromotion();
    
    cout<<endl;

    Developer d=Developer("Mohammed Qasim","Helficare",24,2500000,"C#");
    d.IntroducYourself();
    d.FixBug();
   
    cout<<endl;

    Teacher t=Teacher("Taufik Sheikh","NIPER",25,5000000,"Chemistry");
    t.IntroducYourself();
    t.PrepareLesson();
    
    cout<<endl<<endl<<endl;

    Employee *e;
    e=&e1;
    e->Work();

    e=&e2;
    e->Work();

    e=&d;
    e->Work();

    e=&t;
    e->Work();

    cout<<"-----------------------------------------\n";
    Employee *emp[]={ &e1, &e2, &t, &d };

    for(int i=0;i<3;++i)
    {
        e=emp[i];
        e->Work();
    }
    return 0;
}