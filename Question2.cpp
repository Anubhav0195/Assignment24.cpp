#include<iostream>
using namespace std;
int highestdigit(int x)
{
    int max = -1;


    while(x)
    {
        if(max < x%10)
            max = x%10;
            x = x/10;
    }
    return max;
}
int main()
{
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    cout<<"Highest number is"<<highestdigit(x);
    return 0;
}