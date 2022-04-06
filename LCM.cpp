#include <iostream>
using namespace std;

int gcd(int64_t x, int64_t y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int64_t num1, num2, LCM;
    cin >> num1 >> num2;
    cout << "LCM = " << ((num1 * num2) / gcd(num1, num2));
}