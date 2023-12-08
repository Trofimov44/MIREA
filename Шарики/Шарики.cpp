#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print_permutation(int permutation[], int size) {
    for (int i = 0; i < size; i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

void generate(int permutation[], int n, int i, int& count, vector<int*>& valid_permutations) {
    if (i == n) {
        bool has_match = false;
        for (int j = 0; j < n; j++) {
            if (permutation[j] == j + 1) {
                has_match = true;
                break;
            }
        }

        if (has_match) {
            count++;
            int* valid_permutation = new int[n];
            copy(permutation, permutation + n, valid_permutation);
            valid_permutations.push_back(valid_permutation);
        }

        return;
    }

    for (int j = i; j < n; j++) {
        swap(permutation[i], permutation[j]);

        generate(permutation, n, i + 1, count, valid_permutations);

        swap(permutation[i], permutation[j]);
    }
}

int main() {
    setlocale(LC_ALL, "Rus");

        int n;
        while (true) {
            cout << "Введите количество шаров: ";
            if (!(cin >> n)) {
                cin.clear();
                cin.ignore();
                cout << "\nОшибка\n";
                continue;
            }
            break;
        }

        int* balls = new int[n];
        for (int i = 0; i < n; i++) {
            balls[i] = i + 1;
        }

        int count_matches = 0;
        vector<int*> valid_permutations;

        generate(balls, n, 0, count_matches, valid_permutations);

        cout << "\nОбщее количество перестановок хотя бы с одним совпадением: " << count_matches;

        int total_permutations = 1;
        for (int i = 1; i <= n; i++) {
            total_permutations *= i;
        }

        cout << "\nВсего перестановок:" << total_permutations << "\n" << endl;

        for (int i = 0; i < valid_permutations.size(); i++) {
            delete[] valid_permutations[i];
        }

        delete[] balls;


    return 0;
}
