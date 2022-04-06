// Euclidean method(sequential division)

#include <iostream>
using namespace std;

int gcd(int64_t, int64_t);

int main()
{
    int64_t num1, num2;
    cout << "Entern tow number for find GCD :" << endl
         << "Num1 : ";
    cin >> num1; // 11805951688441
    cout << "Num2 : ";
    cin >> num2; // 268301856194

    cout << "we use Euclidean method for find gcd :" << endl
         << "gcd is : ";
    cout << gcd(num1, num2);

    return 0;
}

int gcd(int64_t x, int64_t y)
{
    int64_t mood = x % y;

    while (mood != 0)
    {
        x = y;
        y = mood;
        mood = x % y;
    }
    return y; // 3435979
}

/*int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}*/
