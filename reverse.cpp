#include <iostream>
#include <string>
using namespace std;

int main()
{
    int reverce, mod, number;

    cout << "Enter Nummber : " << endl;
    cin >> number;

    string str_number = to_string(number); // tabdil adad asli be reshtte
    int len_number = str_number.size();    // tool reshte adad asli

    // cout << "len_number : " << len_number << endl;
    cout << "Reverse : ";
    while (number > 0) //  reverce kardan adad
    {
        mod = number % 10;
        reverce = reverce * 10 + mod;
        number /= 10;
    }

    string str_reverce = to_string(reverce); // tabdil adad makoos be reshte
    int len_reverce = str_reverce.size();    // tool reshte adad makoos

    // cout << "len_reverce : " << len_reverce << endl;

    if (len_reverce < len_number)
    {
        cout.width(len_number);
        cout.fill('0');
        cout.setf(ios::right);
        cout << reverce << endl;
    }
    else
        cout << reverce << endl;

    return 0;
}

/*int main()
{
  string number, reverce;

  cout << "Enter Nummber : " << endl;
  cin >> number;

  int n = number.length();
  reverce = number;

  for (int i = 0; i < n; i++)
  {
    reverce[i] = number[n - i - 1];
  }

  cout << "Reverse : " << reverce << endl;

  return 0;
}*/

/*int main()
{
  int mod, number;
  cout << "enter number : ";
  cin >> number;
  do
  {
    mod = number % 10;
    cout << mod;
    number /= 10;
  } while (number != 0);

  return 0;
}*/
/*void reverce(int x)
{
    if (x)
    {
        cout << x % 10;
        reverce(x / 10);
    }
}
int main()
{
    int number;
    cout << "Enter Number : ";
    cin >> number;
    cout << "\nreverce : ";
    reverce(number);
}*/
