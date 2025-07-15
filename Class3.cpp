#include <iostream>
using namespace std;

class Gambit
{
public:
    Gambit()
    {
        cout << "Inside Constructor" << endl;
    }
    ~Gambit()
    {
        cout << "Inside Destructor" << endl;
    }
    void display()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Gambit gam;
    gam.display();

    return 0;
}