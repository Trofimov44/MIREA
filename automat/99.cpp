#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>  
#include <cmath>      
#include <Windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int generate_number() {
    srand(static_cast<unsigned>(time(0)));

    int number;
    bool digits[10] = { false };

    int temp;

    do {
        number = rand() % 9000 + 1000;

        temp = number;

        while (temp > 0) {
            if (digits[temp % 10]) {
                break;
            }
            digits[temp % 10] = true;
            temp /= 10;
        }

        fill(begin(digits), end(digits), false);

    } while (temp > 0);

    return number;
}

bool is_valid_input(int number) {
    if (number < 1000 || number > 9999) {
        return false;
    }

    bool digits[10] = { false };
    while (number > 0) {
        if (digits[number % 10]) {
            return false;
        }
        digits[number % 10] = true;
        number /= 10;
    }

    return true;
}

void check_guess(int secret_number, int user_number, int& pluses, int& minuses) {
    pluses = minuses = 0;

    for (int i = 0; i < 4; ++i) {
        int secret_digit = (secret_number / static_cast<int>(pow(10, 3 - i))) % 10;
        int user_digit = (user_number / static_cast<int>(pow(10, 3 - i))) % 10;

        if (secret_digit == user_digit) {
            ++pluses;
        }
        else {
            for (int j = 0; j < 4; ++j) {
                int temp_secret_digit = (secret_number / static_cast<int>(pow(10, 3 - j))) % 10;

                if (temp_secret_digit == user_digit && i != j) {
                    ++minuses;
                    break;
                }
            }
        }
    }
}

void set_color(int color) {
    SetConsoleTextAttribute(console, color);
}

int main() {
    setlocale(LC_ALL, "rus");
    int secret_number = generate_number();
    int user_number, pluses, minuses, attempts = 0;


    cout << secret_number << endl << endl;

    do {
        do {
            while (true) {
                cout << "Ведите четырёхзначное число: ";
                if (!(cin >> user_number)) {
                    cin.clear();
                    cin.ignore();
                    cout << "Ошибка\n";
                    continue;
                }
                break;
            }

            if (!is_valid_input(user_number)) {
                cout << "\nОшибка\n";
            }
        } while (!is_valid_input(user_number));

        check_guess(secret_number, user_number, pluses, minuses);

        cout << "\nРезультат " << pluses << " плюсов " << minuses << " минусов! \n";

        ++attempts;
    } while (pluses < 4);

    cout << "\nВы угадали номер " << secret_number << " за " << attempts << "попыток. \n";

    return 0;
}
