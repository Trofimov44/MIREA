#include<iostream>
using namespace std;


int x(int* a, int n)
{
	int mx = 0, indx = -1;

	for (int i = 0; i < n; ++i) {
		if (a[i] > mx) {
			mx = a[i];
			indx = i;
		}
	}

	return indx;
}



int main() {

	unsigned int n, k, t, l, indx;

	cout << "N, K:";
	if (!(cin >> n >> t)) {
		cout << "Ошибка" << endl;
	}

	int* a = new int(n);
	a[0] = n;
	n = 1;

	for (int i = 0; i < t; ++i) {

		indx = x(a, n);

		if (a[indx] % 2 == 0) {
			k = a[indx] / 2;
			l = k - 1;
		}
		else {
			k = a[indx] / 2;
			l = k;
		}

		a[n] = k; n++;
		a[n] = l; n++;
		a[indx] = 0;

	}

	cout << k << " " << l;




	return 0;
}
