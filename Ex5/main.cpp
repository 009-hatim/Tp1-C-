#include <iostream>
#include <vector>
using namespace std;

int main() {
    int L, C;
    cout << "Entrez le nombre de lignes : ";
    cin >> L;
    cout << "Entrez le nombre de colonnes : ";
    cin >> C;

    vector<vector<int>> tab(L, vector<int>(C));

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Entrez l'élément à la ligne " << (i + 1) << " colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }

    if (L != C) {
        cout << "Ce n'est pas une matrice de permutation" << endl;
    } else {
        int m = 1;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                if (m == tab[i][j]) {
                    m++;
                }
            }
        }
        m--;
        if (m == tab[L - 1][C - 1]) {
            cout << "C'est une permutation" << endl;
        } else {
            cout << "Ce n'est pas une matrice de permutation" << endl;
        }
    }

    return 0;
}
