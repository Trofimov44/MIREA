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
    default: return -1;
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
            char pipa = c[i];
            int biba = static_cast<int>(c.length());
            int x = Hex(pipa) * pow(b, biba - i - 1);
            y += x;
        }
        return y;
    }
}

string Any(int a, int b, int c) {
    if (c > 16) {
        cout << "Ошибка" << endl;
        exit(0);
    }
    else {
    int x = Ten(a, b);
        string y = "";
        while (x > 0) {
            int pipa = x % c;
            y = to_string(pipa) + y;
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
    cout << Any(234, 16, 10) << endl;
    return 0;
}
