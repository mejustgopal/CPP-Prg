#include <iostream>
using namespace std;

enum months
{
    January,
    February,
    March,
    April,
    May,
    June,
    July
};

int main()
{
    months m;

    m = March;

    cout << "Month is : " << m + 1;

    return 0;
}