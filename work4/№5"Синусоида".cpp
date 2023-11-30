#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int width = 80;
    const int height = 20;
    const double amplitude = height / 2.0;
    const double frequency = 0.1;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            // Считаем значение синусоиды в точке x
            double value = amplitude * sin(frequency * x);
            // Проверяем, находится ли текущий пиксель на средней линии оси x
            if (y == height / 2) {
                cout << "-";
            }
            // Рисуем осевые + на краях средней линии
            else if ((x == 0 and y == amplitude) or (x == width - 1 and y == amplitude)) {
                cout << "+";
            }
            // Вычисляем, где должны находиться экстремумы
            else if (x == static_cast<int>((3.14159 / 2 + 3.14159 * floor(frequency * x / 3.14159)) / frequency) or
                x == static_cast<int>((3 * 3.14159 / 2 + 3.14159 * floor(frequency * x / 3.14159)) / frequency)) {
                cout << "|"; // E - обозначение экстремума
            }
            // Проверяем, находится ли текущий пиксель на графике функции
            else {
                // И если да, то рисуем звездочку
                cout << (y == static_cast<int>(amplitude - value) ? "*" : " ");
            }
        }
        // Перевод строки после завершения ряда
        cout << endl;
    }

    return 0;
}
