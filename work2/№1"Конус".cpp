#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float h, R, r, l;
    cout << "Введите h, R, r: ";
    if (!(cin >> h >> R >> r)) {
        cout << "введён неверный символ";
        return 0;
    }
    if (h < 0 and R < 0 and r < 0) {
        cout << "не верные значения";
    }
    else{
        float l = sqrt(R * R + h * h);
        float V = (1.)/(3.) * 3.14 * h * ((R * R) + (R * r) + (r * r));
        float S = 3.14 * (R * R + (R + r) * l + r * r);
        cout << "V = " << V << endl;
        cout << "S = " << S << endl;
    }
}
