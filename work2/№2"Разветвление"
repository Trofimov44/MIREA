#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float x, a;
    cout << "Введите x, a: ";
    if (!(cin >> x >> a)) {
        cout << "введён неверный символ";
        return 0;
    }
    if (abs(x) < 1) {
        if (x == 0) {
            cout << "Нет" << endl;
        }
        else {
            float w = a * log(abs(x));
            cout << "w = " << w << endl;
        }
    }
    else if (abs(x) >= 1) {
        if ((a - x * x) < 0) {
            cout << "Нет" << endl;
        }
        else {
            float w = sqrt(a - x * x);
            cout << "w = " << w << endl;
        }
    }
    else {
        cout << "Не верный x" << endl;
    }
    return 0;
}
