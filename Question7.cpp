#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Addition of two number is"<<add(a,b)<<endl;
    int c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    cout<<"Addition of three number is"<<add(a,b,c)<<endl;
    return 0;
}
