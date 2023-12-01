int main() {
    while (true) {
        //добавить ввод проверку

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

        //cout << "\npermutations with at least one match:\n";
        //for (int i = 0; i < valid_permutations.size(); i++) {
        //    print_permutation(valid_permutations[i], n);
        //}

        cout << "\ntotal number of permutations with at least one match: " << count_matches;

        /*cout << "\nall permutations:\n";
        do {
            print_permutation(balls, n);
        } while (next_permutation(balls, balls + n));*/

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
