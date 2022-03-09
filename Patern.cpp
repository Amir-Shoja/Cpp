#include <iostream>
using namespace std;
void print();

int main()
{
    int n = 5;

    // cout << "enter satr : ";
    // cin >> n;
    print();
    cout << 1 << endl;
    ///////////////////////////////////////////mosalas 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    print();
    cout << 2 << endl;
    ////////////////////////////////////////// mosalas 2
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    print();
    cout << 3 << endl;
    ///////////////////////////////////////////mosalas 3
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j - i + 1 << "\t";
        }
        cout << endl;
    }
    print();
    cout << 4 << endl;
    ///////////////////////////////////////////mosalas 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= n - i + 1; j--)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    print();
    cout << 5 << endl;
    ///////////////////////////////////////////or
    /*cout << "i\tj\ti || j" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i <= 1; i++)
    {
      for (int j = 0; j <= 1; j++)
      {
        cout << i << "\t" << j < "\t  " << i || j;
        cout << endl;
      }
      cout << endl;
    }*/
    print();
    cout << 6 << endl;
    /////////////////////////////////////////// lozi
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << "\t";
        for (int k = 1; k < 2 * i - 1; k++)
            cout << k << "\t";
        cout << endl;
    }
    return 0;
}

void print()
{
    cout << "\n================================== ";
}