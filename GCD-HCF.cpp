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

/*int gcd(int64_t x, int64_t y)
{
  if (x == 0)
    return y;
  if (y == 0)
    return x;
  return gcd(y, x % y);
}*/

/*int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}*/
//https://virgool.io/@The_lotonegro/%D8%A7%D9%84%DA%AF%D9%88%D8%B1%DB%8C%D8%AA%D9%85-%D8%A7%D9%82%D9%84%DB%8C%D8%AF%D8%B3-%D8%A8%D8%B1%D8%A7%DB%8C-%D8%A8-%D9%85-%D9%85-%D9%88-%DA%A9-%D9%85-%D9%85-od9cdkpehuhr
