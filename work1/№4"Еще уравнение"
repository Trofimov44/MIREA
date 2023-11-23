#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float a, b, c;
    cout << "Введите значения a, b и c: ";
    if (!(cin >> a >> b >> c)) {
        cout << "введён неверный символ";
        return 0;
    }
    else{
        float D = b * b - 4 * a * c;
        float x1, x2;

        
        if (a == 0 and b != 0 and c != 0) {
            float x = -c / b;
            cout << "Уравнение ax^2 + bx + c = 0 верно при x = " << x << endl;
        }
        else if (a != 0 and b != 0 and c == 0) {
            float x = -b / c;
            cout << "Уравнение ax^2 + bx + c = 0 верно при x = " << x << endl;
        }
        else if (a != 0 and b == 0 and c != 0) {
            float x1 = sqrt(c / a), x2 = sqrt(c / a) * -1;
            cout << "Уравнение ax^2 + bx + c = 0 верно при x1 = " << x1 << ", и x2 = " << x2 << endl;
        }
        else if (a == 0 and b == 0) {
            cout << "Уравнение не имеет корней." << endl;
        }
        else if (a >= 1 or a < 0) {
            if (D > 0) {
                x1 = (-b + sqrt(D)) / (2 * a);
                x2 = (-b - sqrt(D)) / (2 * a);
                cout << "Уравнение ax^2 + bx + c = 0 верно при x1 = " << x1 << ", и x2 = " << x2 << endl;
            }
            else if (D == 0) {
                x1 = -b / (2 * a);
                cout << "Уравнение ax^2 + bx + c = 0 верно при x = " << x1 << endl;
            }
            else {
                cout << "Уравнение не имеет корней." << endl;
            }
        }
        return 0;
    }
}
