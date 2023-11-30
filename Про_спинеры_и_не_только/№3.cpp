#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
		cout <<"Программа находит количество прямоугольников, которые можно вырезать из листа" << endl;
		cout << "Введите 2 параметры листа" << endl;
	int n, m;
	if ((cin >> n && cin >> m)and(m != '.' && m != ',' && n!= '.' && n!= ','))
	{
		cout << n * (n + 1) / 2 * m * (m + 1) / 2;
	}
	else
	{
		cout << "Введите целые положительные числа";
	}
	return 0;
}
