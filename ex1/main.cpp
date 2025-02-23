#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Entrer le nombre d'elements du tableau : ";
    cin >> n;

    int ta[100];

    for (int i = 0; i < n; i++) {
        cout << "Entrer le nombre " << (i + 1) << ": ";
        cin >> ta[i];
    }


    for (int i = 0; i < n; i++) {
        cout << "Le nombre " << (i + 1) << " est : " << ta[i] << endl;
    }

    for (int i = 0; i < n; i++) {
        int m = 0;
        for (int j = 0; j < n; j++) {
            if (j != i && ta[i] == ta[j]) {
                m = ta[i];
                break;
            }
        }
        if (m == 0) {
            cout << "Le nombre unique est : " << ta[i] << endl;
        }
    }

    return 0;
}
