#include<iostream>
#include<cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float S, p, n;
    cout << "Введите S, p, n: ";
    if (!(cin >> S >> p >> n)) {
        cout << "введён неверный символ";
        return 0;
    }
    float r = p / 100;
    if (12 * pow(1 + r, n) - 1 == 0) {
        cout << "Нет" << endl;
    }
    else {
        float m = (S * r * pow(1 + r, n)) / (12 * pow(1 + r, n) - 1);
        cout << "m = " << m << endl;
    }
    return 0;
}
