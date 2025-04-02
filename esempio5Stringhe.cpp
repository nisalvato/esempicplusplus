#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Creazione e inizializzazione di stringhe
    string str1 = "Ciao";
    string str2("Mondo");
    string str3 = str1 + " " + str2; // Concatenazione

    // Accesso ai caratteri
    cout << "Primo carattere di str1: " << str1[0] << endl;

    // Modifica di caratteri
    str1[0] = 'B';
    cout << "str1 modificata: " << str1 << endl;

    // Lunghezza della stringa
    cout << "Lunghezza di str3: " << str3.length() << endl;

    // Sottostringa
    string sub = str3.substr(5, 5); // Da posizione 5, lunghezza 5
    cout << "Sottostringa di str3: " << sub << endl;

    // Ricerca di una sottostringa
    size_t pos = str3.find("Mondo");
    if (pos != string::npos) {
        cout << "'Mondo' trovato in str3 alla posizione: " << pos << endl;
    }

    // Rimozione di caratteri
    str3.erase(5, 6); // Rimuove 6 caratteri da posizione 5
    cout << "str3 dopo erase: " << str3 << endl;

    // Inserimento di caratteri
    str3.insert(5, "Universo");
    cout << "str3 dopo insert: " << str3 << endl;

    // Confronto tra stringhe
    if (str1 == "Biao") {
        cout << "str1 è uguale a 'Biao'" << endl;
    } else {
        cout << "str1 non è uguale a 'Biao'" << endl;
    }

    //Stringhe immesse dall'utente
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;

    return 0;
}