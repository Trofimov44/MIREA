#include<iostream>
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float S, m, n, r;
    cout << "Введите S, m, n: ";
    if (!(cin >> S >> m >> n)) {
        cout << "введён неверный символ";
        return 0;
    }
    for (r = 0; r < 1; r = r + 0.01) {
        if (m == ((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)))) {
            float p = r * 100;
            cout << p << endl;
        }
    }
    return 0;
}
