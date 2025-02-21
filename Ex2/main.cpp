#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Entrer le nombre d'éléments du tableau : ";
    cin >> n;

    cout << "Entrer un nombre : ";
    cin >> m;

    vector<int> tab(n);
    for (int i = 0; i < n; i++) {
        cout << "Entrer le nombre " << (i + 1) << ": ";
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tab[i] + tab[j] == m) {
                cout << "( " << tab[i] << ", " << tab[j] << " ), ";
            }
        }
    }

    return 0;
}
