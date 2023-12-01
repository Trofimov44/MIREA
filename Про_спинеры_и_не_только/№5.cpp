#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "enter : ";
    if (cin >> n >> k and k > 1 and k <= n) {
        while (k > 1) {
            n = (n - k % 2) / 2;
            k /= 2;
        }

        int left_seats = (n - 1) / 2;
        int right_seats = n / 2;

        cout << left_seats << endl;
        cout << right_seats << endl;
    }
    else {
        cout << "error! ";
    }
}
