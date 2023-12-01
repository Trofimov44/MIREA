#include <iostream>
#include <string>
using namespace std;

int Hex(char HexNum) {
    switch (HexNum) {
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    case 'A': return 10;
    case 'B': return 11;
    case 'C': return 12;
    case 'D': return 13;
    case 'E': return 14;
    case 'F': return 15;
    default: return 0;
    }
}

string HexR(int HexNum) {
    switch (HexNum) {
    case 0: return "0";
    case 1: return "1";
    case 2: return "2";
    case 3: return "3";
    case 4: return "4";
    case 5: return "5";
    case 6: return "6";
    case 7: return "7";
    case 8: return "8";
    case 9: return "9";
    case 10: return "A";
    case 11: return "B";
    case 12: return "C";
    case 13: return "D";
    case 14: return "E";
    case 15: return "F";
    }
}

int Ten(string a, int b) {
    setlocale(LC_ALL, "Rus");
    for (int i = 0; i < a.length(); i++) {
        if (Hex(a[i]) > b - 1 or Hex(a[i]) == 0) {
            cout << "Ошибка" << endl;
            exit(0);
        }

    }
    if (b > 16) {
        cout << "Ошибка" << endl;
        exit(0);
    }

    else {
        int y = 0;

        for (int i = 0; i < a.length(); i++) {
            int biba = static_cast<int>(a.length());
            int x = Hex(a[i]) * pow(b, biba - i - 1);
            y += x;
        }
        return y;
    }
}

string Any(string a, int b, int c) {
    setlocale(LC_ALL, "RUS");

    if (c > 16 or b == c or b < 2 or c < 2) {
        cout << "Ошибка" << endl;
        exit(0);
    }
    else {
        int x = Ten(a, b);
        string y = "";
        while (x > 0) {
            string pipa = HexR(x % c);
            y = pipa + y;
            x /= c;
        }
        return y;
    }

}

int main()
{   
    setlocale(LC_ALL, "Rus");
    string a;
    int b, c;
    cout << "Введите число, которое хотите перевести: ";
    
    if (!(cin >> a )) {
        cout << "Ошибка" << endl;
    }

    cout << "Введите систему счисления этого числа: ";
    if (!(cin >> b)) {
        cout << "Ошибка" << endl;
    }

    cout << "Введите систему, в которую хотите перевести число: ";
    if (!(cin >> c)) {
        cout << "Ошибка" << endl;
    }

    cout << Any(a, b, c) << endl;
    return 0;
}
