#include <iostream>
using namespace std;

void Prime_Number(int num)
{
	int flag = 0;
	if (num <= 1)
		cout << "NO";
	else
	{
		for (int i = 2; i < num; i++)
			if (num % i == 0)
			{
				flag += 1;
				break;
			}
		if (flag = 0 || num == 2)
			cout << "YES";
		else
			cout << "NO";
	}
}

int main()
{
	int Num;
	cout << "check for Prime Number : " << endl;
	cin >> Num;
	Prime_Number(Num);
}