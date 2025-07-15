#include <iostream>
using namespace std;

enum captains
{
    Avi,
    Ravi,
    Kavi,
    Navi,
    Mahi
};

int main()
{
    captains cap = Mahi;

    if (cap == Mahi)
    {
        cout << "Our Captain is Mahi and its value is " << cap << endl;
    }
    else
    {
        cout << "He is not our captain";
    }

    return 0;
}