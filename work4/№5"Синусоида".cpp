#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int width = 80; // Ширина экрана
    const int height = 20; // Высота экрана
    const double amplitude = height / 2.0; // Амплитуда синусоиды
    const double frequency = 0.1; // Частота синусоиды

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            double value = amplitude * sin(frequency * x);
            if (y == height / 2) {
                cout << "-";
            }
            else if ((x == 0 && y == amplitude) || (x == width - 1 && y == amplitude)) {
                cout << "+";
            }
            else if (x == static_cast<int>(frequency * x) || x == static_cast<int>(frequency * x) + width / 2) {
                cout << "|";
            }
            else {
                cout << (y == static_cast<int>(amplitude - value) ? "*" : " ");
            }
        }
        cout << endl;
    }

    return 0;
}
