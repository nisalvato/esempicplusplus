#include <iostream>
using namespace std;

//esempio di vettore

int main() {
    const int DIM = 100;  // dimensione massima dell'array
    int numeri[DIM];
    int n;

    cout << "Quanti numeri vuoi inserire? (max " << DIM << "): ";
    cin >> n;

    if (n > DIM) {
        cout << "Errore: hai superato la dimensione massima consentita." << endl;
        return 1;
    }

    cout << "Inserisci " << n << " numeri interi:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeri[i];
    }

    cout << "Hai inserito: ";
    for (int i = 0; i < n; ++i) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    return 0;
}
