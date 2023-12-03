#include<iostream>
#include<cmath>
using namespace std;



int main() {
	setlocale(LC_ALL, "rus");
	int n = 2;
	double x = 0, c = 0, y = 0;

	for (int i = 1; i < n + 1; i++) {
		x = x + sin(i);
		c = i / x;
		y += c;
	}
	cout << y << endl;
	return 0;
}
