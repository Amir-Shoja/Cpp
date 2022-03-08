#include <iostream>

using namespace std;
void print();

int main()
{
  int j = 1, number;
  
  cout << "Enter Number for Show in Set : " << endl;
  cin >> number;
  
  cout << "{ ";
  
  for (int i = 1; i <= number;i++)
  {
    cout << i;
    if(j < number)
    {
      cout << ", ";
    }
    j++;
  }
  
  cout << " }";
}