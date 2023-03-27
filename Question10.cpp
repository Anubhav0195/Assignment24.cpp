#include<iostream>
using namespace std;
int add(int a ,int b)
{
    return a+b;
}
float add(float m,float n)
{
    return m+n;
}
float add(int x,float y)
{
    return x+y;
}
int main()
{
    int a,b,x;
    float m,n,y;
    cout<<"Enter two value";
    cin>>a>>b;
    cout<<"Sum is"<<add(a,b);
    cout<<endl;
    cout<<"Enter two value";
    cin>>m>>n;
    cout<<"Sum is "<<add(m,n);
    cout<<endl;
    cout<<"Enter two values";
    cin>>x>>y;
    cout<<"Sum is"<<add(x,y);
    cout<<endl;
    return 0;
}
