// Use of new and delete keyword in cpp

#include <iostream>
using namespace std;

int main()
{
    int *ptr1, *ptr2, *ptr3, avg;

    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout << "Enter first number : " << endl;
    cin >> *ptr1;

    cout << "Enter second number : " << endl;
    cin >> *ptr2;

    cout << "Enter third number : " << endl;
    cin >> *ptr3;

    avg = (*ptr1 + *ptr2 + *ptr3) / 3;

    cout << "Average is : " << avg;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}