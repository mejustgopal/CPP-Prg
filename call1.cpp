#include<iostream>
using namespace std;

void sal_chng(int s)
{
    s = 30000;
    cout<<"Value inside function : "<<s<<endl;
}

int main()
{
    int sal = 25000;
    sal_chng(sal);
    cout<<"Value inside main : "<<sal<<endl;
    return 0;
}