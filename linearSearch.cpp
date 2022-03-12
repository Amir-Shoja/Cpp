#include <iostream>
using namespace std;

void enter(int[], int);
void search(int[], int, int);
void print(int[], int);

int main()
{
    int n, number;
    cout << "Enter the number of array indexes : ";
    cin >> n;
    cout << "Enter the number you are looking for : ";
    cin >> number;
    int a[n];

    enter(a, n);
    search(a, n, number);
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

void search(int a[], int y, int num)
{
    int temp, find[1000] = {0}, cnt = 0;
    for (int i = 0; i < y; i++)
    {
        if (num == a[i])
        {
            find[i] = num;
            cnt++;
        }
    }
    if (cnt > 0)
    {
        cout << "\nYour number was found in the index : " << endl;
        for (int i = 0; i < 1000; i++)
        {
            if (find[i] == 0 && find[i] != num)
                continue;
            else
            {
                cout << "index [" << i << "] : " << find[i] << endl;
            }
        }
    }
    else
        cout << "Not found in" << endl;
}

void print(int a[], int y)
{
    cout << "\n{ ";
    for (int i = 0; i < y; i++)
    {
        cout << a[i] << ", ";
    }
    cout << "\b\b"
         << " }";
}
