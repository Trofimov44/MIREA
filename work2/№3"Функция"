#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float x, y, b;
    cout << "Введите x, y, b: ";
    if (!(cin >> x >> y >> b)) {
        cout << "введён неверный символ";
        return 0;
    }
    if ((b - y <= 0) or (b - x < 0)) {
        cout << "z не определён" << endl;
    }
    else {
        float z = log(b - y) * sqrt(b - x);
        cout << "z = " << z << endl;
    }
    return 0;
}
