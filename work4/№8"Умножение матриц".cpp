#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");
    float matrix1[3][4] = { {5., 2., 0, 10.},
                           {3., 5., 2., 5.},
                           {20., 0, 0, 0} };

    float matrix2[4][2] = { {1.20, 0.50},
                           {2.80, 0.40},
                           {5., 1.},
                           {2., 1.5} };

    float result[3][2] = { 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 4; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Результат умножения матриц:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
