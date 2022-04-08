#include <iostream>
using namespace std;

// Sort the array in Ascending order
void bubbleSortAscending(int arr[], int size)
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
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}
// Sort the array in Descending order
/*void bubbleSortDescending(int arr[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
      cout << arr[j] << " ";
    }
    cout << endl;
  }
}*/

int main()
{
    int size;
    cout << "Array size : ";
    cin >> size;
    int arr[size];
    cout << "Enter the array elements" << endl
         << endl;
    // Get the array
    for (int i = 0; i < size; i++)
    {
        cout << "array [" << i << "] : ";
        cin >> arr[i];
    }
    cout << endl;

    bubbleSortAscending(arr, size); // call function

    cout << endl;

    // bubbleSortDescending(arr, size); // call function

    cout << endl
         << "Array sorted : [ ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]";
}