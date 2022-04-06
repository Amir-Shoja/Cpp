// Euclidean method(sequential division)

#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int num1, num2;
    cout << "Entern tow number for find GCD :" << endl
         << "Num1 : ";
    cin >> num1;
    cout << "Num2 : ";
    cin >> num2;

    cout << "we use Euclidean method for find gcd :" << endl
         << "gcd is : " << gcd(num1, num2);

    return 0;
}

int gcd(int x, int y)
{
    int r = x % y;

    while (r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

/*int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}*/
