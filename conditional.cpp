#include<iostream>
using namespace std;

int main()
{
    int x,y,big;

    cout<<"Enter first no: ";
    cin>>x;

    cout<<"Enter second no: ";
    cin>>y;

    if (x>y)
    {
        cout<<x<<" is greater than "<<y;
    }

    else{
        cout<<y<<" is greater than "<<x;
    }


    return 0;
}
