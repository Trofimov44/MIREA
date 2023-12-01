#include<iostream>
#include<fstream>
#include<cmath>
#include<string>

using namespace std;

int main() {

    const int seller_string = 3;
    const int product_column = 4;

    const int price_string = 4;
    const int commission_column = 2;

    double table_A[seller_string][product_column]{ {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
    double table_B[price_string][commission_column]{ {1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50} };


    double multiplication_result[seller_string][commission_column] = {};
    for (int i = 0; i < seller_string; i++) {
        for (int j = 0; j < commission_column; j++) {
            for (int k = 0; k < product_column; k++) {
                multiplication_result[i][j] += table_A[i][k] * table_B[k][j];
            }
        }
    }
    if (product_column != price_string) {
        cout << "error \n"; //проверка на возможность перемножения матриц
        return 1;
    }


    double total_sales = 0;
    double total_commission = 0;
    double max_sales = multiplication_result[0][0];
    double min_sales = multiplication_result[0][0];
    double max_commission = multiplication_result[0][1];
    double min_commission = multiplication_result[0][1];

    int max_sales_seller = 0;
    int min_sales_seller = 0;
    int max_commission_seller = 0;
    int min_commission_seller = 0;

    for (int i = 0; i < seller_string; i++) {
        total_sales += multiplication_result[i][0];
        total_commission += multiplication_result[i][1];

        if (multiplication_result[i][0] > max_sales) {
            max_sales = multiplication_result[i][0];
            max_sales_seller = i;
        }
        if (multiplication_result[i][0] < min_sales) {
            min_sales = multiplication_result[i][0];
            min_sales_seller = i;
        }

        if (multiplication_result[i][1] > max_commission) {
            max_commission = multiplication_result[i][1];
            max_commission_seller = i;
        }
        if (multiplication_result[i][1] < min_commission) {
            min_commission = multiplication_result[i][1];
            min_commission_seller = i;
        }
    }
    for (int i = 0; i < seller_string; i++) {
        for (int j = 0; j < commission_column; j++) {
            cout << multiplication_result[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;

    cout << "1) "<< max_sales << min_sales << endl;
    cout << "2)" << max_commission << min_commission << endl;
    cout << "3)" << total_sales << endl;
    cout << "4)" << total_commission << endl;
    cout << "5)" << total_sales + total_commission << endl << endl;


}
