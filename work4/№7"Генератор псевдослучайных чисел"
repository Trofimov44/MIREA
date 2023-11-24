#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int m, b, c, D;
	int s = 0;
	bool a;
	cout << "Выберите вариант(0 - первый вариант, 1 - торой вариант) ";
	if (!(cin >> a)) {
		cout << "неверный символ" << endl;
		return 0;
	}
	if (a == 1) {
		m = 37;
		b = 3;
		c = 64;
		for (int i = 0; i < 10; i++) {
			float D = (m * s + b) % c;
			s = D;
			cout << D << endl;

		}
	}
	else {
		m = 25137;
		b = 13849;
		c = 65537;
		for (int i = 0; i < 10; i++) {
			float D = (m * s + b) % c;
			s = D;
			cout << D << endl;

		}
	}
}
