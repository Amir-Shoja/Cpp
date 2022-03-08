#include <iostream>

using namespace std;
void print();

int main()
{
  int i, cnt = 0, cnt2 = 0;
  for (char ch = 'a'; ch <= 'z'; ch++)
  {
    i = ch;
    cout << ch << " : " << i << "\t\t";
    cnt++;
    if (cnt == 3)
    {
      cout << endl;
      cnt = 0;
    }
  }
  print();
  for (char ch = 'A'; ch <= 'Z'; ch++)
  {
     i = ch;
    cout << ch << " : " << i << "\t\t";
    cnt2++;
    if (cnt2 == 3)
    {
      cout << endl;
      cnt2 = 0;
    }
  }
  return 0;
}

void print()
{
  cout<<"\n======================\n";
}