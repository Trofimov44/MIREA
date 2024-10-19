#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>  
#include <cmath>      
#include <Windows.h>

using namespace std;

// Проверка правильности введенного пользователем числа
bool is_input_valid(int input_number) {
    // Проверка на четырехзначность числа
    if (input_number < 1000 or input_number > 9999) {
        return false;
    }

    // Проверка на уникальность цифр в числе
    bool digits_exist[10] = { false };
    while (input_number > 0) {
        if (digits_exist[input_number % 10]) {
            return false;
        }
        digits_exist[input_number % 10] = true;
        input_number /= 10;
    }

    return true;
}

// Генерация случайного числа с уникальными цифрами
int create_random_number() {
    int generated_number;
    bool digits_exist[10] = { false };

    int temp_value;

    do {
        // Генерация случайного числа от 1000 до 9999
        generated_number = rand() % 9000 + 1000;

        temp_value = generated_number;

        // Проверка на уникальность цифр в сгенерированном числе
        while (temp_value > 0) {
            if (digits_exist[temp_value % 10]) {
                break;
            }
            digits_exist[temp_value % 10] = true;
            temp_value /= 10;
        }

        fill(begin(digits_exist), end(digits_exist), false);

    } while (temp_value > 0);

    return generated_number;
}

// Оценка попытки пользователя
void evaluate_guess(int secret_value, int user_value, int& correct_digits, int& misplaced_digits) {
    correct_digits = misplaced_digits = 0;

    // Перебор цифр в числах
    for (int i = 0; i < 4; ++i) {
        int secret_digit = (secret_value / static_cast<int>(pow(10, 3 - i))) % 10;
        int user_digit = (user_value / static_cast<int>(pow(10, 3 - i))) % 10;

        // Проверка на совпадение цифр на одинаковых позициях
        if (secret_digit == user_digit) {
            ++correct_digits;
        }
        else {
            // Поиск совпадения цифры на другой позиции
            for (int j = 0; j < 4; ++j) {
                int temp_secret_digit = (secret_value / static_cast<int>(pow(10, 3 - j))) % 10;

                if (temp_secret_digit == user_digit and i != j) {
                    ++misplaced_digits;
                    break;
                }
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    int secret_value = create_random_number();
    int user_value, correct_digits, misplaced_digits, attempts_count = 0;

    cout << secret_value << endl << endl;

    do {
        // Ввод числа пользователем с проверкой
        do {
            while (true) {
                cout << "Введите четырёхзначное число: ";
                if (!(cin >> user_value)) {
                    cout << "Ошибка\n";
                    continue;
                }
                break;
            }

            // Повторный запрос ввода при неверном числе
            if (!is_input_valid(user_value)) {
                cout << "\nОшибка\n";
            }
        } while (!is_input_valid(user_value));

        // Оценка введенного пользователем числа
        evaluate_guess(secret_value, user_value, correct_digits, misplaced_digits);

        cout << "\nРезультат " << correct_digits << " правильных " << misplaced_digits << " не на своём месте! \n";

        ++attempts_count;
    } while (correct_digits < 4);

    cout << "\nВы угадали значение " << secret_value << " за " << attempts_count << " попыток. \n";

    return 0;
}
