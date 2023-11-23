#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    ofstream file("numbers.txt");
    if (!file) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }
    int numbers[10] = { 13, 4, 6, 8, 5, 43, 7, 2, 9, 10 };
    
    for (int i = 0; i < 10; i++) {
        file << numbers[i] << endl;
    }
    
    file.close();
    
    ifstream file2("numbers.txt");
    
    if (!file2) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }
    int sum = 0;
    int number;
    
    while (file2 >> number) {
        cout << number << endl;
        sum += number;
    }
    
    file2.close();

    cout << "Сумма чисел: " << sum << endl;

    return 0;
}
