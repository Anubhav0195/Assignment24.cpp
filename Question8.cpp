#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int area(int x,int y)
{
    return x*y;
}
float area(float b,float h)
{
    return (0.5*b*h);
}
int main()
{
    int r,x,y;
    cout<<"Enter the radius of a circle";
    cin>>r;
    cout<<"Area of a circle is"<<area(r);
    cout<<endl;
    cout<<"Enter the length and breadth of a rectangle";
    cin>>x>>y;
    cout<<"Area of a rectangle is "<<area(x,y);
    cout<<endl;
    float b,h;
    cout<<"Enter the base and height of a triangle";
    cin>>b>>h;
    cout<<"Area of a triangle is"<<area(b,h);
    cout<<endl;
    return 0;
}