#include <iostream>
#include <math.h>

using namespace std;
void print()
{
  cout<<"======================\n";
}

int main()
{
  int a, x = 6, y = 4;
  int result1 =  x & y, result2 = x && y;
  float b;
  bool result3 =x > y ? 'A' : 'B';
  double c;
  char d;
  
  cout << "sizeof(a) int    : " << sizeof(a) << " Byte" << endl; // andaze a
  cout << "sizeof(b) float  : " << sizeof(b) << " Byte" << endl; // andaze b
  cout << "sizeof(c)  duble : " << sizeof(c) << " Byte" << endl; // andaze c
  cout << "sizeof(d) char   : " << sizeof(d) << " Byte" << endl; // andaze ch
  
  print();
  
  cout << "x & y  (0110 & 0100) :  " << result1 << endl;
  cout << "x && y (6 && 4)      :  " << result2 << endl;
  cout << "x > y ? 'A' : 'B'    :  " << result3 << endl;
 
  print();
  
  cout.width(4);
  cout.fill('*');
  cout.setf(ios::left);
  cout << x << endl;
  cout.width(6);
  cout.fill('*');
  cout.setf(ios::right);
  cout << "amir" << endl;

  print();

  cout << "INT : " << endl;
  cout << INT16_MAX << endl;
  cout << INT32_MIN << endl;
  cout << INT64_MAX << endl;
  cout << endl << "short : " << endl;
  cout << SHRT_MAX << endl;
  cout << SHRT_MIN << endl;
  cout << endl << "Long : " << endl;
  cout << LONG_MIN << endl;
  cout << LONG_MAX << endl;

  print();

  cout << "pow(2,3) : " << pow(2,3) << endl;           // tavan
  cout << "pow(2,-2) : " << pow(2,-2) << endl << endl;

  cout << "fmod(6,4) : " << fmod(6,4) << endl;            // %
  cout << "fmod(-20,7) : " << fmod(-20,7) << endl << endl;

  cout << "abs(-2.5) : " << abs(-2.5) << endl;         // qadr motlaq
  cout << "fabs(-3.5) : " << fabs(-3.5) << endl << endl;

  cout << "floor(3.8) : " << floor(3.8) << endl;       // kaf
  cout << "ceil(3.8) : " << ceil(3.8) << endl << endl; // saqf

  cout << "Log10(100) : " << log10(100) << endl;
  cout << "Log(2.7) : " << log(2.7) << endl << endl;   // dar paye neper

  cout << "tolower('A') : " << tolower('A') << endl;
  cout << "toupper('a') : " << toupper('a') << endl << endl;

  cout << "isupper('A') : " << isupper('A') << endl;
  cout << "islower('A') : " << islower('A') << endl << endl;

  cout << "int('a') : " << int('a') << endl;
  cout << "char(97) : " << char(97) << endl << endl;

}