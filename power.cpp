#include <iostream>

using namespace std;

int main()
{
    int num1, num2, i = 1, result = 1;

    cout << "Enter Nummber1 : ";
    cin >> num1;
    cout << "Enter Nummber2 : ";
    cin >> num2;

    while (i <= num2)
    {
        result *= num1;
        i++;
    }
    cout << endl
         << "power(Number1, Number2) : " << result << endl;
}