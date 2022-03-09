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

/*int main()
{
  int64_t factorial = 1;
  int i = 1, number;
  cout << "enter number : ";
  cin >> number;
  cout << "number\tfactorial" << endl;
  cout << "------------------------" << endl;
  do
  {
    factorial *= i;
    cout << i << "\t" << factorial << endl;
    i++;
  } while (i <= number);

    return 0;
}*/
