#include <iostream>
#include <vector>
using namespace std;

int main() {
    int L;
    cout << "Nombre de ligne : ";
    cin >> L;

    vector<vector<int>> tab(L);
    vector<int> t(L);

    for (int i = 0; i < L; i++) {
        cout << "Nombre de colonnes dans la ligne " << (i + 1) << ": ";
        int C;
        cin >> C;
        tab[i].resize(C);
        t[i] = C;
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            cout << "Entrez le nombre pour la ligne " << (i + 1) << " colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    vector<int> S(L, 0);
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            S[i] += tab[i][j];
        }
    }

    int m = S[0], n = 1;
    for (int i = 1; i < L; i++) {
        if (S[i] > m) {
            m = S[i];
            n = i + 1;
        }
    }

    cout << "La ligne ayant la somme maximale est la ligne " << n << " avec une somme de " << m << endl;

    return 0;
}
