#include <iostream>

using namespace std;

int main() {
    int L, C;

    cout << "Entrez le nombre de lignes : ";
    cin >> L;
    cout << "Entrez le nombre de colonnes : ";
    cin >> C;

    int tab[100][100];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Entrez l'élément à la ligne " << (i + 1) << " colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }

    if (L != C) {
        cout << "Ce n'est pas une matrice de permutation" << endl;
    } else {
        bool isPermutation = true;

        for (int i = 0; i < L; i++) {
            int rowSum = 0, colSum = 0;
            for (int j = 0; j < C; j++) {
                rowSum += tab[i][j];
                colSum += tab[j][i];
            }
            if (rowSum != 1 || colSum != 1) {
                isPermutation = false;
                break;
            }
        }

        if (isPermutation) {
            cout << "C'est une permutation" << endl;
        } else {
            cout << "Ce n'est pas une matrice de permutation" << endl;
        }
    }

    return 0;
}
