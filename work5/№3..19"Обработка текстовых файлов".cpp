#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    string filename = "text.txt";

    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Не удалось открыть файл." << endl;
        return 1;
    }

    unordered_map<char, int> charFrequency;

    char ch;
    while (file.get(ch)) {
        if (isalpha(ch)) {  
            charFrequency[ch]++;
        }
    }

    file.close();

    char mostFrequentChar = '\0';
    int maxFrequency = 0;

    for (const auto& pair : charFrequency) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequentChar = pair.first;
        }
    }

    if (mostFrequentChar != '\0') {
        cout << "Наиболее часто встречающийся символ: '" << mostFrequentChar << "'" << endl;
        cout << "Частота встречаемости: " << maxFrequency << endl;
    }
    else {
        cout << "Файл пуст или не содержит букв." << endl;
    }

    return 0;
}
