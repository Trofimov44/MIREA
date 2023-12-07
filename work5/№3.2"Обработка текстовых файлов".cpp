#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("text.txt"); 

    if (!inputFile.is_open()) {
        cerr << "Не удалось открыть файл." << endl;
        return 1;
    }

    string line;

    if (getline(inputFile, line)) {
        for (int i = 0; i < line.size(); ++i) {
            if (line[i] == ' ') {
                line[i] = '\n';
            }
        }
        cout << line;
    }
    else {
        cerr << "Не удалось прочитать строку из файла." << endl;
    }

    inputFile.close();  // Закрытие файла

    return 0;
}
