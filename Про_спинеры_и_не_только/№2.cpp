#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout <<"Программа находит количество спиннеров с 3 лопастями и количество спиннеров с 4 лопастями" << endl;
	cout << "Введите количесвто лопастей" << endl;
	int m;
	if ((cin >> m) and (m != '.'  && m != ','))
	{
		int n4, n3;
		n4 = m % 3;
		n3 = (m - 4 * n4) / 3;
		if (n3 >= 0)
		{
			cout << n3 << endl << n4;
		}
		else
		{
			cout << 0 << endl << 0;
		}
	}
	else
	{
		cout << "Введите целое положительное число";
	}
	return 0;
}

