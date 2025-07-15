#include<iostream>
using namespace std;

int main()
{
    int original,remainder,reversed = 0,temp,i;

    cout<<"Enter a no: ";
    cin>>original;
    temp = original;
    while(original!=0)
    {
        remainder = original %10;
        original = original/10;
        reversed = reversed * 10 + remainder;
    }
    if(reversed==temp)
    {
        cout<<temp<<" is a Palindrome no";
    }
    else{
        cout<<temp<<" is not a Palindrome no";
    }
    return 0;
}
