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
            cout << "Entrez l'�l�ment � la ligne " << (i + 1) << ", colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }

    cout << "\nMatrice :\n";
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "  " << tab[i][j];
        }
        cout << endl;
    }

    int s[100];
    for (int i = 0; i < L; i++) {
        s[i] = 0;
        for (int j = 0; j < C; j++) {
            s[i] += tab[i][j];
        }
    }

    int m = 0;
    for (int i = 1; i < L; i++) {
        if (s[i] > s[m]) {
            m = i;
        }
    }

    cout << "\nLigne avec la somme maximale :\n";
    for (int i = 0; i < C; i++) {
        cout << " " << tab[m][i];
    }
    cout << " = " << s[m] << endl;

    return 0;
}
