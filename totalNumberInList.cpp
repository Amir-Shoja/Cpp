#include <iostream>
using namespace std;

int main()
{
    int N ,sum = 0;
    cout << "Size Array : ";
    cin >> N;
    
    int myarray[N];
    
    for (int i = 0; i < N; i++)
    {
        cout << "Enter " << i+1 << ": ";
        cin >> myarray[i];
        sum += myarray[i];
    }
    
    cout << "{ ";
    
    for (int i = 0; i < N; i++)
    {
        cout << myarray[i] << ", ";
    }
    cout << "\b\b" << " }" << endl << "Total = " << sum;
}