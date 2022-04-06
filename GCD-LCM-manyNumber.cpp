#include <iostream>
using namespace std;

int gcd(int64_t x, int64_t y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int listGcd(int64_t list[], int64_t n)
{
    int64_t result = list[0];
    for (int64_t i = 0; i < n; i++)
        result = gcd(result, list[i]);
    if (result == 1)
        return 1;
    return result;
}

int lcm(int64_t x, int64_t y)
{
    return (x * y) / gcd(x, y);
}

int listLcm(int64_t list[], int64_t n)
{
    int64_t res = list[0];
    for (int i = 1; i < n; i++)
        res = (((list[i] * res)) / (gcd(list[i], res)));
    return res;
}

int main()
{
    int64_t list1[] = {4, 6, 12, 24, 30};
    int64_t n1 = sizeof(list1) / sizeof(list1[0]);
    cout << listGcd(list1, n1) << endl;
    int64_t list2[] = {4, 6, 12, 24, 30};
    int64_t n2 = sizeof(list2) / sizeof(list2[0]);
    cout << listLcm(list2, n2) << endl;
    return 0;
}