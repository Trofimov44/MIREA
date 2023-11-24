#include <iostream>
#include <fstream>
using namespace std;

void Spriam() {
    setlocale(LC_ALL, "rus");
    float a, b;
    cout << "Введите два числа: ";
    if (!(cin >> a >> b)) {
        cout << "Введён неверный символ" << "\n" << endl;
    }
    else if (a <= 0 or b <= 0) {
        cout << "Введён неверный символ" << "\n" << endl;
    }
    else {
        float S = a * b;
        cout << S << endl;
    }

}

void Sround() {
    setlocale(LC_ALL, "rus");
    float R;
    cout << "Введите R: ";
    if (!(cin >> R)) {
        cout << "Введён неверный символ" << "\n" << endl;
    }
    else if (R <= 0) {
        cout << "Введён неверный символ" << "\n" << endl;
    }
    else {
        float S = 3.14 * R * R;
        cout << S << endl;
    }

}

void Streug() {
    setlocale(LC_ALL, "rus");
    float a, b;
    cout << "Введите a, h: ";
    if (!(cin >> a >> b)) {
        cout << "Введён неверный символ" << "\n" << endl;
    }
    else if (a <= 0 or b <= 0) {
        cout << "Введён неверный символ" << "\n" << endl;
    }
    else {
        float S = a * b * 1.0 / 2.0;
        cout << S << endl;
    }

}

int main() {
    setlocale(LC_ALL, "rus");
    int v = 1;
    while (v == 1) {
        cout << "Выбирай ";
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            Spriam();
            break;
        case 2:
            Sround();
            break;
        case 3:
            Streug();
            break;
        default:
            cout << "Введён неверный символ" << "\n" << endl;
        }
    }


    return 0;
}
