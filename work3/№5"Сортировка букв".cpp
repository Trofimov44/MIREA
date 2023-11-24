#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int z(char a, char b) {
    if (tolower(a) == tolower(b)) {
        return a < b;
    }
    return tolower(a) < tolower(b);
}

int main() {

    string str = "AzXcVabnMaSdfGhjKlQwErTyUiOp";

    sort(str.begin(), str.end(), z);

    cout << "Строка в алфавитном порядке: " << str << endl;

    return 0;
}
