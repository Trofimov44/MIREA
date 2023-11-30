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


int Ten(int a, int b) {
    setlocale(LC_ALL, "Rus");
    string c = to_string(a);
    for (int i = 0; i < c.length(); i++) {
        if (Hex(c[i]) > b) {
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

        for (int i = 0; i < c.length(); i++) {
            int biba = static_cast<int>(c.length());
            int x = Hex(c[i]) * pow(b, biba - i - 1);
            y += x;
        }
        return y;
    }
}

string Any(int a, int b, int c) {
    setlocale(LC_ALL, "RUS");
    string x = to_string(a);
    for (int j = 0; j < x.length(); j++) {
        if (Hex(x[j]) > b or Hex(x[j]) > c) {
            cout << "Ошибка" << endl;
            exit(0);
        }

    }
    if (c > 16 or b == c) {
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

    int a, b, c;
    if (!(cin >> a >> b >> c)) {
        cout << "Ошибка" << endl;
    }
    cout << Any(a, b, c) << endl;
    return 0;
}
