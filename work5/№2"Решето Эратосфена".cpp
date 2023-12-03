#include<iostream>
#include<cmath>
using namespace std;


void da(int n, int m, int x[]) {
	setlocale(LC_ALL, "rus");
	if (m < n) {
		if (x[m] != 0) { 
			int j = m * 2;
			while (j < n) {
				x[j] = 0; 
				j = j + m;
			}
			m += 1;
			da(n, m, x);
		}
		else {
			m += 1;
			da(n, m, x);
		}
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			if (x[i] != 0 and x[i] != 1) {
				cout << x[i] << endl;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите число: ";
	if(!(cin >> n)) {
		cout << "Ошибка" << endl;
		return 0;
	}
	int a = n - 1;
	int m = 2;
	int* x = new int[a];
	for (int i = 0; i < a; i++) {
		x[i] = i;
	}
	da(n, m, x);
	return 0;
}
