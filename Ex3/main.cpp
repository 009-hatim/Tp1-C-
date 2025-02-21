#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Entrer le nombre d'éléments du tableau : ";
    cin >> n;

    vector<int> tab(n);
    for (int i = 0; i < n; i++) {
        cout << "Entrer le nombre " << (i + 1) << ": ";
        cin >> tab[i];
    }

    int m = tab[0];
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if ((tab[i] % 2) != 0 && (tab[j] % 2) == 0) {
                m = tab[i];
                tab[i] = tab[j];
                tab[j] = m;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " , ";
    }

    return 0;
}
