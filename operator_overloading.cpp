#include <iostream>
using namespace std;

class Increase
{
private:
    int value;

public:
    Increase()
    {
        value = 10;
    }

    void operator++()
    {
        value += 5;
    }

    void display()
    {
        cout << "Value is : " << value << endl;
    }
};

int main()
{
    Increase inc;
    ++inc;
    inc.display();

    return 0;
}