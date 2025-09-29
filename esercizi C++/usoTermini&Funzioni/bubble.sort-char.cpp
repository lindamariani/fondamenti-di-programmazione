#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Chiediamo all'utente di inserire una parola
    cout << "Inserisci una parola: ";
    char parola[100];
    cin >> parola;  // Lettura della parola (come array di caratteri)

    int n = strlen(parola);  // Calcoliamo la lunghezza della parola

    // Bubble Sort
    bool scambiato;
    do {
        scambiato=false; // All'inizio non sono stati fatti scambi
        for (int i = 0; i < n - 1; i++) {
            // Confrontiamo due caratteri adiacenti
            if (parola[i] > parola[i + 1]) {
                // Se sono nell'ordine sbagliato, li scambiamo
                char temp = parola[i];
                parola[i] = parola[i + 1];
                parola[i + 1] = temp;
                scambiato = true;  // Indichiamo che è stato fatto uno scambio
            }
        }
    } while (scambiato);  // Continuiamo finché ci sono scambi da fare

    // Mostriamo la parola ordinata
    cout << "Parola ordinata: " << parola << endl;

    return 0;
}
