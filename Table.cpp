#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, i, j;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    for (i = num1; i <= num2; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == j)
            {
                cout << i << " * " << j << " = " << i * j << endl;
            }
            else
            {
                cout << i << " * " << j << " = " << i * j << endl;
            }
        }
        cout << endl;
        if (i == num2)
        {
            cout << "End of multiplication table for numbers from " << num1 << " to " << num2 << endl;
        }
    }

    return 0;
}
