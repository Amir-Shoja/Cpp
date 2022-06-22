#include <iostream>
#include <string>
using namespace std;
void print()
{
    cout << "\n\n====================\n\n";
}
int main()
{
    cout << "  **  cin.get  **" << endl; // cin.get
    char s[10];
    cin.get(s, 10, 'f'); // be 'f' hasase v badesho chap nmikone
    cout << s;

    print();

    char ch;
    cout << "  **  cin.putback  **" << endl; // cin.putback
    while (cin.get(ch))
    {
        if (ch == 'a')
            cin.putback('f'); //'a' ro be 'f' taqier mide
        else if (ch == '.')
            break;
        else
            cout << ch;
    }

    print();

    char c;
    cout << "  **  cin.peek  &  cin.ignore  **" << endl; // cin.peek  &  cin.ignore
    while (cin.get(c))
    {
        cout << c;
        while (cin.peek() == 'a')
            cin.ignore(1, 'b');
        if (ch == '.')
            break;
    }

    print();

    cout << "  **  atoi  &  atof  &  atol  **" << endl;
    char s1[] = "12";
    cout << atoi(s1) / 2 << endl; // string to intijer
    char s2[] = "12.23";
    cout << atof(s2) / 2 << endl; // string to float
    char s3[] = "125432345657";
    cout << atol(s3) / 2 << endl; // string to long

    print();

    cout << "  **  islower - isupper - toupper - tolower  **" << endl; // toupper & toolower asci ro midan
    char s4;
    while (cin.get(s4))
    {
        if (islower(s4))               // agar koochike
            cout << char(toupper(s4)); // bozorgrsh kon
        else if (isupper(s4))          // age bozorge
            cout << char(tolower(s4)); // koochikesh kon
        else
            cout << s4;
    }

    print();

    cout << "  **  isalpha - isdigit - isalnum  **" << endl;
    char s5;
    int alph, digit, all;
    while (cin.get(s5))
    {
        if (isalpha(s5)) // alpba
            alph++;
        if (isdigit(s5)) // adad ha
            digit++;
        if (isalnum(s5)) // hamshon
            all++;
    }
    cout << "alph : " << alph << "digit : " << digit << "all : " << all;

    print();

    cout << "  **  strcpy  &  strcat  &  strcmp  &  strchr  &  strstr  &  strtok  &  strspn  **" << endl;
    char s6[] = "abcdef", s7[] = "ABCDEF";
    cout << strcpy(s6, s7);     // kole 7 ro toy 6 mirize
    cout << strncpy(s6, s7, 3); // 3 tay aval az 7 toy 6 mirize
    cout << strcat(s6, s7);     // 7 ro be tah 6 michasboone
    cout << strncat(s6, s7, 3); // 3 tay aval az 7 ro be 6 michasboone
    cout << strcmp(s6, s7);     // char aval 6 ro ba 7 moqayese mikone (0 +1 -1)
    cout << strncmp(s6, s7, 4); // 4 tay aval az 6 v 7 ro moqayese mikone
    cout << strchr(s6, 'a');    // avalin char 'a' ro toy s6 migarde
    cout << strrchr(s6, 'a');   // akharin char 'a' ro toy s6 migarde
    // cout << strstr(s6, 'ab');   // zir reshte 'ab' ro too 6 migarde
    cout << strtok(s6, "d"); // toy 6 ta d ro chap mikone
    cout << strspn(s6, s7);  // az aval toy 6 zir reshtee ke character hash toy 7 bashe ro toolesh ro mige
    cout << strcspn(s6, s7); // az aval 6 chia toy 7 nist ro toolesh ro mige
    print();

    cout << "  **  strtol  &  strtoul  &  strtod  **";
    char s10[] = "122334a5fh8", s11[] = "12.3ab4", s12[] = "", *p1, *p2;
    cout << strtol(s10, &p1, 10);
    cout << strtod(s11, &p2);
}