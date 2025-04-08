/*for (istruzione 1; istruzione 2; istruzione 3) {
    // codice da ripetere
  }
  Vediamo come funziona:
    L'istruzione 1 viene eseguita (una solo volta) prima dell'esecuzione del blocco di codice.
    L'istruzione 2 definisce la condizione per l'esecuzione del blocco di codice.
    Se la condizione è vera, il blocco di codice viene eseguito.
    se è falsa il blocco non viene eseguito
    L'istruzione 3 viene eseguita (ogni volta) dopo l'esecuzione del blocco di codice.
  */

  //L'esempio seguente stamperà i numeri da 0 a 4:

  #include <iostream>
  using namespace std;
  
  int main() {
    for (int i = 0; i < 5; i++) {
      cout << i << "\n";
    }

  /*
  Esempio spiegato
    L'istruzione 1 imposta una variabile prima dell'inizio del ciclo (int i = 0).
    L'istruzione 2 definisce la condizione per l'esecuzione del ciclo (i deve essere minore di 5). Se la condizione è vera, il ciclo ricomincerà, se è falsa, il ciclo terminerà.
    L'istruzione 3 incrementa un valore (i++) ogni volta che il blocco di codice nel ciclo viene eseguito.
  */

  cout << "inizia il secondo esercizio" << "\n";
  //VEdiamo se hai capito. Cosa fa il seguente ciclo for?
  for (int j = 0; j <= 10; j = j + 2) {
    cout << j << "\n";
  }

  return 0;
}
