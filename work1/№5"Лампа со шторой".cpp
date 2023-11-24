#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string a;

    cout << "На улице день?(1 - да, 0 - нет) ";
    cin >> a;

    if (a == "1" or a == "0") {
        string b;
        cout << "В комнате раскрыты шторы?(1 - да, 0 - нет) ";
        cin >> b;

        if (b == "1" or b == "0") {
            string c;
            cout << "В комнате горит лампа?(1 - да, 0 - нет) ";
            cin >> c;

            if (c == "1" or c == "0") {
                if (a == "1" and b == "1" or c == "1") {
                    cout << "В комнате светло" << endl;
                }
                else {
                    cout << "В комнате темно" << endl;
                }
            }
            else {
                cout << "введён неверный символ" << endl;
            }
        }

        else {
            cout << "введён неверный символ" << endl;
        }
    }

    else {
        cout << "введён неверный символ" << endl;
    }
}
