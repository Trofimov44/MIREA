#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float a, b;
    cout << "Введите два числа: ";
    if (!(cin >> a >> b)) {
        cout << "введён неверный символ";
        return 0;
    }
    else{

        int sum = a + b;
        int subtr = a - b;
        int multip = a * b;
        float divid = 0;

        if (b != 0) {
            divid = a / b;
        }


        cout << "Сумма: " << sum << endl;
        cout << "Разность: " << subtr << endl;
        cout << "Произведение: " << multip << endl;
        if (b != 0) {
            cout << "Деление: " << divid << endl;
        }

        return 0;
    }
}
