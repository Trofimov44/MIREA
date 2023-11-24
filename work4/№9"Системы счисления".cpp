 #include <iostream>
#include <cmath>
#include <string>
#include <fstream>
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

string decToAny(int decim, int a) {
  string octal = "";
  while (decim > 0) {
    int rem = decim % a;
    octal = to_string(rem) + octal;
    decim /= a;
  }
  return octal;
}

int main() {
  setlocale(LC_ALL, "rus");
  string HexNum;
  int num;
  int syst;
  bool schet = 0;
  bool f1 = 0;

  cout << "Введите число: ";
  cin >> HexNum;

  cout << "Введите систему счисления вашего числа: ";
  cin >> syst;
  if (syst > 16) {
    cout << "Вы ввели некорректное значение!" << endl;
    return 0;
  }

  cout << "Введите систему счисления для перевода (от 2 до 16): ";
  cin >> num;
  if (num > 16) {
    cout << "Вы ввели некорректное значение!" << endl;
    return 0;
  }

  int decim = 0;

  for (int i = 0; i < HexNum.length(); i++) {
    int value = Hex(HexNum[i]);
    if (value == -1) {
      cout << "Некорректное число." << endl;
      return 0;
    }
    decim = decim * syst + value;
  }

  string result = decToAny(decim, num);
  cout << "Число " << HexNum << " в системе счисления с основанием " << num << " равно " << result << "." << endl;

  return 0;
}
