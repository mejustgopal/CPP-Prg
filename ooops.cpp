#include <iostream>
using namespace std;

class TradeFair
{
private:
    int coupon;

public:
    void setcoupons(int c)
    {
        coupon = c;
    }
    int getCoupons()
    {
        return coupon;
    }
};

int main()
{
    TradeFair t;
    t.setcoupons(50);
    cout << "Coupon : " << t.getCoupons();
    return 0;
}