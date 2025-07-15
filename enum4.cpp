#include <iostream>
using namespace std;

int main()
{

    enum colors
    {
        Red,
        Blue,
        Green,
        Yellow
    };

    colors select = Yellow;

    switch (select)
    {
    case Red:
        cout << "It is Red " << endl;
        break;

    case Blue:
        cout << "It is Blue " << endl;
        break;

    case Green:
        cout << "It is Green " << endl;
        break;

    case Yellow:
        cout << "It is yellow " << endl;
        break;

    default:
        cout << "Not in the list " << endl;
        break;
    }
    return 0;
}