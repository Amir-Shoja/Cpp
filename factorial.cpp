#include <iostream>
using namespace std;

long factorial (int number)
{
    if (number > 1)
        return number*factorial(number -1);
    else
        return 1;
}

int main()
{
    int n;
    cout << "Enter number for calculat factorial : " << endl;
    cin >> n;

    cout << "factorial : " << factorial(n);
}