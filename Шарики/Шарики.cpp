#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[100];
    long long k = 0;
    setlocale(0, "");
        cout << "Программа находит вероятность того, что вытянутый из 10 шариков будут совпадать как его номер, так и порядок вытаскивания" << endl;
        cout << "Введите номер (цифрой) шарика" << endl;
    
    int n;
    cin >> n;
    long long count_n = 0;
    if ((cin >> n) and (n > 0) and (n != '.') and (n != ',')) {
        for (int i1 = 1; i1 < 11; i1++)
        {
            a[1] = i1;
            for (int i2 = 1; i2 < 11; i2++)
            {
                a[2] = i2;
                for (int i3 = 1; i3 < 11; i3++)
                {
                    a[3] = i3;
                    for (int i4 = 1; i4 < 11; i4++)
                    {
                        a[4] = i4;
                        for (int i5 = 1; i5 < 11; i5++)
                        {
                            a[5] = i5;
                            for (int i6 = 1; i6 < 11; i6++)
                            {
                                a[6] = i6;
                                for (int i7 = 1; i7 < 11; i7++)
                                {
                                    a[7] = i7;
                                    for (int i8 = 1; i8 < 11; i8++)
                                    {
                                        a[8] = i8;
                                        for (int i9 = 1; i9 < 11; i9++)
                                        {
                                            a[9] = i9;
                                            for (int i10 = 1; i10 < 11; i10++)
                                            {
                                                a[10] = i10;
                                                int check[20];
                                                int flag = 1;
                                                for (int x = 0; x <= 19; x++)
                                                {
                                                    check[x] = 0;
                                                }
                                                for (int x = 1; x <= 10; x++)
                                                {
                                                    if (check[a[x]] > 0)
                                                    {
                                                        flag = 0;
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        check[a[x]] += 1;
                                                    }
                                                }
                                                if (flag == 1)
                                                {
                                                    if (a[n] == n)
                                                    {
                                                        cout << "Число где a[n] == n --> ";
                                                        count_n += 1;
                                                    }
                                                    else
                                                    {
                                                        cout << "Число --> ";
                                                    }
                                                    for (int i = 1; i <= 10; i++)
                                                    {
                                                        cout << a[i] << " ";
                                                    }
                                                    cout << endl;
                                                    k += 1;

                                                }

                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "Всего чисел: " << k << endl << "Нужных чисел: " << count_n;
    }
    else {
        cout << "Введите натуральное положительное целое число" << endl;
    }
    
}
