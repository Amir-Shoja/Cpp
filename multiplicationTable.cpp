#include <iostream>
using namespace std;

int line()
{
    for(int i=0;i<158;i++)
        cout<<"-";
}

int main()
{
    cout<<"-";
    line();
    cout << endl ;
    for (int i=1;i<11;i++)
    {
        cout<<"|";
        for (int j=1;j<11;j++)
        {
            cout << "  " << i <<" * "<<j<<"= "<< i*j << "\t\b\b |";
        }
        cout << endl << "|";
        line();
        cout <<"|"<< endl;
    }
}