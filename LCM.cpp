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
//https://virgool.io/@The_lotonegro/%D8%A7%D9%84%DA%AF%D9%88%D8%B1%DB%8C%D8%AA%D9%85-%D8%A7%D9%82%D9%84%DB%8C%D8%AF%D8%B3-%D8%A8%D8%B1%D8%A7%DB%8C-%D8%A8-%D9%85-%D9%85-%D9%88-%DA%A9-%D9%85-%D9%85-od9cdkpehuhr
