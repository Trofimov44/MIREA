#include<iostream>
#include <string>
#include<fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    ofstream MyWriteFile("filename.txt");

    MyWriteFile << "Текст";

    MyWriteFile.close();

    string myText;

    ifstream MyReadFile("filename.txt");

    while (getline(MyReadFile, myText)) {
        cout << myText;
    }

    MyReadFile.close();
    return 0;
}
