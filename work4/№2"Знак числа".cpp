#include <iostream>
#include <fstream>
using namespace std;

 void sign(float a) {
     if (a > 0) {
         cout << 1 << endl;
     }
     else if (a < 0) {
         cout << -1 << endl;
     }
     else {
         cout << 0 << endl;
     }
}

 int main() {
     setlocale(LC_ALL, "rus");
     float a;
     cout << "Введите число: ";
     if (!(cin >> a)) {
         cout << "введён неверный символ";
         return 0;
     }
     sign(a);

     return 0;
}
