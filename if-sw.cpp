#include <iostream>
#include <math.h>

using namespace std;
void print();
// if :::  min max -- sowap -- bakhsh paziri
// sw :::  nomre -- roozay hafte -- calculator
int main()
{
  int a = 2, b = 1, c = 3, temp = 0;
  cout << "min : ";
  if (a < b && a < c)
    cout << a << endl;
  else if(b < a && b < c)
    cout << b << endl;
  else
    cout << c;

  print();

  temp = a;
  a = b;
  b = temp;
  cout << "a = 2, b = 1 \nswap a to b : \na : " << a << "\nb : " << b;

  print();

  if(a != 0 && a%b == 0)
    cout << "a % b = 0 ";
  else
    cout << "a % b != 0 ";  
  
  print();

  int n;
  cout << "Enter Scop : " << endl;
  cin >> n;

  switch (n)
  {
    case 10:case 11:case 12:case 13: cout << "C" << endl;break;
    case 14:case 15:case 16: cout << "B" << endl;break;
    case 17:case 18:case 19:case 20: cout << "A" << endl;break;
    default: cout << "D" << endl;
  }

  print();

  int h;
  cout << "Whitch Day : " << endl;
  cin >> h;

  switch(h)
  {
    case 0: cout << "Saturdays" << endl;break;
    case 1: cout << "Sundays" << endl;break;
    case 2: cout << "Mondays" << endl;break;
    case 3: cout << "Tuesdays" << endl;break;
    case 4: cout << "Wednesdays" << endl;break;
    case 5: cout << "Thursdays" << endl;break;
    case 6: cout << "Fridays" << endl;break;
    default: cout << "Unknown";
  }

  print();

  char ch;
  cout << "Whitch operator on a=1 & b=2 : " << endl;
  cin >> ch;

  switch (ch)
  {
  case '+': cout << "a + b =" << a+b << endl; break;
  case '-': cout << "a - b =" << a-b << endl; break;
  case '*': cout << "a * b =" << a*b << endl; break;
  case '/': cout << "a / b =" << a/b << endl; break;
  default:break;
  }
  
  print();

}

void print()
{
  cout<<"\n======================\n";
}
