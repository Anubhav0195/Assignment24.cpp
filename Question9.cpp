#include<iostream>
using namespace std;
int max(int x,int y)
{
    if(x>y)
    return x;
    else 
    return y;
}
float max(float a, float b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int x,y;
    float a,b;
    cout<<"Enter two integer value";
    cin>>x>>y;
    cout<<"Highest number is"<<max(x,y);
    cout<<endl;
    cout<<"Enter two real numbers";
    cin>>a>>b;
    cout<<"Highest number is"<<max(a,b);
    cout<<endl;
    return 0;

}