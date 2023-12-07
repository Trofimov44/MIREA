#include <iostream>
#include <vector>
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");
    float a = 1, v = 0, t = 0;
    int c = -1;
    vector<float> x;
    cout << "/**** Анализ роста учеников ***" << endl;
    cout << "Введите рост (см) и нажмите <Enter>" << endl;

    while (a != 0) {
        cout << "->";
        if (!(cin >> a)) {
            cout << "Ошибка" << endl;
            return 0;
        }
        x.push_back(a);
    }
    for (int i : x) {
        c += 1;
        v += i;
    }
    v = v / c;
    for (int i : x) {
        if (i > v) {
            t += 1;
        }
    }

    cout << "Средний рост: " << v << endl;
    cout << "У " << t << " человек(а) рост превышает средний*/";
    return 0;
}
