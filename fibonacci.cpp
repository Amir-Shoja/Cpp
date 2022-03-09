#include <iostream>
using namespace std;

int64_t fibo;

int desired(int n)
{
    if (n <= 1)
        return n;
    return desired(n - 1) + desired(n - 2);
}

void serise(int n)
{
    int f[n];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (i = 0; i <= n; i++)
    {
        cout << f[i] << " ";
    }
}

int main()
{
    int n, number;
    cout << "What you want to Run ?\n"
         << endl
         << "1. Number of numbers " << endl
         << "2. up to the desired number " << endl
         << "3. Exit" << endl
         << "\nwhich : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "which number to show? ";
        cin >> number;
        cout << desired(number);
        break;

    case 2:
        cout << "How many number to show? ";
        cin >> number;
        serise(number);
        break;

    case 3:
        exit(0);
    default:
        cout << "** ERROR **" << endl
             << "You must select 1 or 2 or 3";
        break;
    }

    return 0;
}
