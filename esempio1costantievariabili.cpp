#include <iostream> // Libreria per input e output
using namespace std;

int main() {
    // Dichiarazione di costanti
    const double PI = 3.14159; // Costante per il valore di Pi greco
    const int ANNO_CORRENTE = 2025; // Costante per l'anno corrente
    const char SIMBOLO = '#'; // Costante per un carattere specifico
    
    // Dichiarazione e inizializzazione delle variabili con valori di default
    int numeroIntero = 0;
    float numeroDecimale = 0.0;
    double numeroGrande = 0.0;
    char carattere = 'A';
    bool veroFalso = false;
    
    // Input delle variabili
    cout << "Inserisci un numero intero (default: 0): ";
    cin >> numeroIntero;
    
    cout << "Inserisci un numero decimale (float) (default: 0.0): ";
    cin >> numeroDecimale;
    
    cout << "Inserisci un numero grande (double) (default: 0.0): ";
    cin >> numeroGrande;
    
    cout << "Inserisci un carattere (default: A): ";
    cin >> carattere;
    
    cout << "Inserisci un valore booleano (0 per false, 1 per true) (default: false): ";
    cin >> veroFalso;
    
    // Stampa delle variabili
    cout << "Valore di numeroIntero: " << numeroIntero << endl;
    cout << "Valore di numeroDecimale: " << numeroDecimale << endl;
    cout << "Valore di numeroGrande: " << numeroGrande << endl;
    cout << "Valore di carattere: " << carattere << endl;
    cout << "Valore di veroFalso: " << veroFalso << endl; // Stampa 1 per true, 0 per false
    
    // Stampa delle costanti
    cout << "Valore della costante PI: " << PI << endl;
    cout << "Valore della costante ANNO_CORRENTE: " << ANNO_CORRENTE << endl;
    cout << "Valore della costante SIMBOLO: " << SIMBOLO << endl;
    
    return 0; // Termine del programma
}
