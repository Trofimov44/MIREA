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

void generate_permutation(int permutation[], int n, int i, int& count, vector<int*>& valid_permutations) {
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

        generate_permutation(permutation, n, i + 1, count, valid_permutations);

        swap(permutation[i], permutation[j]);
    }
}

int main() {
    while (true) {

        int n;
        while (true) {
            cout << "enter the number of balls: ";
            if (!(cin >> n)) {
                cin.clear();
                cin.ignore();
                cout << "\nerror!\n";
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

        generate_permutation(balls, n, 0, count_matches, valid_permutations);

        cout << "\ntotal number of permutations with at least one match: " << count_matches << endl << endl;
        int total_permutations = 1;
        for (int i = 1; i <= n; i++) {
            total_permutations *= i;
        }

        cout << "\ntotal permutations: " << total_permutations << endl;

        for (int i = 0; i < valid_permutations.size(); i++) {
            delete[] valid_permutations[i];
        }

        delete[] balls;
    }


    return 0;
}
