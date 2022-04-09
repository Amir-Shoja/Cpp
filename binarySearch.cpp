#include <iostream>
#include <iomanip>
using namespace std;

void sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Array : [ ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

void StepsToFind(const int arr[], int low, int middle, int high, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i < low || i > high)
            cout << "   ";
        else if (i == middle)
            cout << setw(3) << arr[i] << '*';
        else
            cout << setw(3) << arr[i] << ' ';
    }
    cout << endl;
}

int binarySearch(const int arr[], int size, int key, int low, int high)
{
    int middle;
    while (low <= high)
    {
        middle = (low + high) / 2;
        StepsToFind(arr, low, middle, high, size);
        if (arr[middle] == key)
            return middle;
        else if (key < arr[middle])
            high = middle - 1;
        else
            low = middle + 1;
    }
    return 0;
}

int main()
{
    int size, key;
    cout << "Array size : ";
    cin >> size;
    int arr[size];

    // Get the array
    cout << "Enter the array elements\n\n";
    for (int i = 0; i < size; i++)
    {
        cout << "element [" << i << "] : ";
        cin >> arr[i];
    }

    // print array
    cout << "\nYou'r Array : [ ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;

    // sort array
    sort(arr, size);

    // Get key
    cout << "\n\nEnter the number you are looking for : ";
    cin >> key;

    // Steps to find
    for (int j = 0; j < size; j++)
        cout << setw(3) << j << ' ';
    cout << '\n';

    for (int k = 1; k <= 4 * size; k++)
        cout << '-';
    cout << endl;

    // call function for find
    int check = binarySearch(arr, size, key, 0, key - 1);

    // return result
    if (check != 0)
        cout << "\n** Found ** \nin element : " << check;
    else
        cout << "Not Found";
}
