#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter Starting Number: ";
    cin >> num1;

    cout << "Enter Ending Number: ";
    cin >> num2;

    while (num1 <= num2)
    {
        int i = 1;  
        while (i <= 10)
        {
            cout << num1 << " x " << i << " = " << num1 * i << endl;
            i++;
        }
        cout << endl; 
        num1++;
    }

    return 0;
}

