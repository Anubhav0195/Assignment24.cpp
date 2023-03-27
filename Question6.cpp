#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x,y;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    swap(x,y);
    cout<<"NUmber after swaping is"<<x<< " "<<y;
    return 0; 
}