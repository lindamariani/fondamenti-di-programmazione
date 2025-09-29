#include <iostream>
#include <cstring> // Per strlen
using namespace std;

char* revert(char* str) {
    // Calcola la lunghezza della stringa
    int len = strlen(str);

    // Alloca memoria per la nuova stringa (incluso il carattere '\0')
    char* reversed = new char[len + 1];

    // Copia i caratteri in ordine inverso
    for (int i = 0; i < len; ++i) {
        reversed[i] = str[len - 1 - i];
    }

    // Aggiungi il carattere di terminazione
    reversed[len] = '\0';

    return reversed; // Restituisci la nuova stringa
}

int main() {
    int MAX_LEN = 50; // Massimo numero di caratteri
    char input[MAX_LEN + 1]; // +1 per includere il carattere terminatore '\0'

    cout << "Inserisci una stringa (max 50 caratteri): ";
    cin.getline(input, MAX_LEN + 1); // Legge una stringa con massimo 50 caratteri

    // Controlla la lunghezza della stringa inserita
    if (strlen(input) > MAX_LEN) {
        cout << "Errore: la stringa inserita supera i 50 caratteri." << endl;
        return -1;
    }

    // Chiama la funzione revert
    char* reversed = revert(input);

    // Stampa il risultato
    cout << "Stringa invertita: " << reversed << endl;

    // Libera la memoria allocata
    delete[] reversed;

    return 0;
}
