#include <iostream>
using namespace std;

void enter(int[], int);
void rev(int[], int);
void print(int[], int);

int main()
{
    int n;
    cout << "Enter the number of array indexes : ";
    cin >> n;
    int a[n];

    enter(a, n);
    rev(a, n);
    print(a, n);

    return 0;
}

void enter(int a[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }
}

void rev(int a[], int y)
{
    int temp;
    for (int i = 0; i < y / 2; i++)
    {
        temp = a[i];
        a[i] = a[(y - 1) - i];
        a[(y - 1) - i] = temp;
    }
}

void print(int a[], int y)
{
    cout << "{ ";
    for (int i = 0; i < y; i++)
    {
        cout << a[i] << ", ";
    }
    cout << "\b\b"
         << " }";
}
