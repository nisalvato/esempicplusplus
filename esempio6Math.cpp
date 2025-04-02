#include <iostream>
#include <cmath> // Include della libreria Math

using namespace std; // Usare lo spazio dei nomi std

int main() {
    // Esempio di utilizzo delle funzioni della libreria Math

    // Calcolo della radice quadrata
    double numero = 16.0;
    double radice = sqrt(numero);
    cout << "La radice quadrata di " << numero << " è " << radice << endl;

    // Calcolo della potenza
    double base = 2.0;
    double esponente = 3.0;
    double potenza = pow(base, esponente);
    cout << base << " elevato alla " << esponente << " è " << potenza << endl;

    // Trovare il massimo e il minimo tra due numeri
    double a = 10.5, b = 20.3;
    cout << "Il massimo tra " << a << " e " << b << " è " << max(a, b) << endl;
    cout << "Il minimo tra " << a << " e " << b << " è " << min(a, b) << endl;

    // Calcolo del logaritmo naturale
    double valore = 2.71828; // Approssimazione di e
    cout << "Il logaritmo naturale di " << valore << " è " << log(valore) << endl;

    // Generazione di numeri casuali
    srand(time(0)); // Inizializza il generatore di numeri casuali con il tempo corrente
    int numeroCasuale = rand() % 100; // Genera un numero casuale tra 0 e 99
    cout << "Numero casuale generato: " << numeroCasuale << endl;

    return 0;
}