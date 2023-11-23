#include<iostream>
#include <string>
#include<fstream>
#include <typeinfo>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int i;
    string a, b;

    ofstream v("file.txt");
    v << "Текст12345";
    v.close();

    ifstream x("file.txt");
    getline(x,a);
    x.close();

    for (i = 0; i < a.size(); i++) {
        if (a[i] >= '0' and a[i] <= '9') {
            cout << a[i]; 
        }
    }

}
