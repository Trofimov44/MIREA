#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    float N;
    cout << "Введите N: ";
    if (!(cin >> N)) {
        cout << "введён неверный символ";
        return 0;
    }
    if (N < 0) {
        for (int i = 1; i < 11; i++) {
            cout << i << "\n";
        }
    }
    else {
        if (N == float(N)){
            for (int i = N + 1; i < N + 10; i++) {
                cout << i << "\n";
            }
        }
        else {
            for (int i = N; i < N + 10; i++) {
                cout << i << "\n";
            }
        }
    }
    return 0;
}
