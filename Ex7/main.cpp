#include <iostream>

using namespace std;

int main() {
    int L;

    cout << "Nombre de lignes : ";
    cin >> L;

    int* t = new int[L];
    int** tab = new int*[L];

    for (int i = 0; i < L; i++) {
        cout << "Nombre de colonnes dans la ligne " << (i + 1) << ": ";
        cin >> t[i];

        tab[i] = new int[t[i]];
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            cout << "Entrez le nombre pour la ligne " << (i + 1) << " colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }

    cout << "\nMatrice :\n";
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    int* S = new int[L];

    for (int i = 0; i < L; i++) {
        S[i] = 0;
        for (int j = 0; j < t[i]; j++) {
            S[i] += tab[i][j];
        }
    }

    int maxSomme = S[0];
    int ligneMax = 1;

    for (int i = 1; i < L; i++) {
        if (S[i] > maxSomme) {
            maxSomme = S[i];
            ligneMax = i + 1;
        }
    }

    cout << "\nLa ligne avec la plus grande somme est la ligne " << ligneMax
         << " avec une somme de " << maxSomme << endl;



    return 0;
}
