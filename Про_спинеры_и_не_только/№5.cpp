#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Программа выводит количество свободных мест с двух сторон от школьник, который последним занял место в ряду" << endl;
	cout << "Введите кол-во свободных мест и какой по счету школьник пришел" << endl;
	int n;
	long long n, m;
	if ((cin >> n >> m) and (m != '.' && m != ',' && n != '.' && n != ','))
	{
		while (m != 1)
		{
			n = (n - m % 2) / 2;
			m /= 2;
			cout << (n - 1) / 2 << endl << n / 2;
		}
	}
	else
	{
		cout << "Введите 2 положительных целых числа";
	}
	return 0;
}
