#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    string filename = "text.txt";
    vector<string> words;

    ifstream inFile(filename);
    if (inFile.is_open()) {
        string word;
        while (inFile >> word) {
            words.push_back(word);
        }
        inFile.close();
    }
    else {
        cerr << "Ошибка при открытии файла для чтения." << endl;
        return 1;
    }

    string newWord;
    cout << "Введите новое слово: ";
    cin >> newWord;
    words.push_back(newWord);

    sort(words.begin(), words.end());

    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto word : words) {
            outFile << word << endl;
        }
        outFile.close();
        cout << "Данные были сохранены в " << filename << endl;
    }
    else {
        cerr << "Ошибка при открытии файла для записи." << endl;
        return 1;
    }

    return 0;
}
