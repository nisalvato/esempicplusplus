#include <iostream> // Include la libreria standard per input e output

using namespace std; // Dichiara l'utilizzo del namespace std

int main() {
    cout << "Inserisci un numero: ";
    int numero;
    cin >> numero; // Legge un numero dall'utente

    // Controlla se il numero è positivo. If semplice
    // Se il numero è maggiore di zero, stampa un messaggio
    if (numero > 0) {
        cout << "Il numero è positivo." << endl;
    }

    // Controlla se il numero è positivo. 
    // Se il numero è maggiore di zero, stampa un messaggio
    //per sgnaalre che il numero è positivo
    //Se il numero è minore di zero, stampa un messaggio
    //per sgnaalre che il numero è negativo
    if (numero > 0) {
        cout << "Il numero è positivo." << endl;
    }else{
        cout << "Il numero è negativo." << endl;

    }

    //If annidato
    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
       cout << "Good evening.";
    }
    // Outputs "Good evening."
    // If con operatore logico
    //Controlla se il numero è positivo e pari
    //Se il numero è maggiore di zero e pari, stampa un messaggio
    //per sgnaalre che il numero è positivo e pari
    if (numero > 0 && numero % 2 == 0) {
        cout << "Il numero è positivo e pari." << endl;
    } else {
        cout << "Il numero non è positivo o non è pari." << endl;
    }
    return 0; // Indica che il programma è terminato con successo
}
