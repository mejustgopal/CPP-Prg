#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    while (num < 20)
    {
        cout<<"Value is : "<<num<<endl;
        if (num == 15)
        {
            break;
        }
        num++;
    }
    cout<<"Out of the loop";
    return 0;
}
