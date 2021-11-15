#include <iostream>
using namespace std;

int operate (int a, int b)
{
  return (a*b);
}

double operate (double a, double b)
{
  return (a/b);
}

double operate(double a,int b)
{
    return a/b;
}

string operate(int a,string b)
{
    return "I am string return";
}

/*int sum(int a,int b)
{
    return a+b;
}*/
template <class T,class P>//class Z>
string sum(T a, P b)
{
    cout<< a;
    cout<<b;
    return "salam";
}
int main ()
{
  int x=5,y=2;
  double n=5.0,m=2.0;

  cout << operate (x,y) << '\n';
  cout << operate (n,m) << '\n';
  cout<<operate(n,y)<<"\n";
  cout<<operate(4,"7")<<"\n";

  cout<<sum(2,10)<<"\n";
  cout<<sum(2,10.6)<<"\n";
  cout<<sum(2.4,"2.10")<<"\n";


  return 0;
}