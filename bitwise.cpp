#include<iostream>
#include<bitset>

using namespace std;

//this is bitwise operators

int main()
{
    int a=21;
    int b=10;
    int temp=0;

    cout<<"a is : "<<bitset<8>(a)<<endl;
    cout<<"b is : "<<bitset<8>(b)<<endl;

    for(int i=0;i<10;++i)
    {
        temp=a&i;
        cout<<"For i ="<<i<<" : "<<bitset<5>(i)<<" -> "<<bitset<5>(temp) <<endl;
    }
    

    temp=a|b;
    cout<<bitset<8>(temp) <<endl;
    return 0;

}