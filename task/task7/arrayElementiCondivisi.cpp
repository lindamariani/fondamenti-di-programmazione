#include <iostream>
using namespace std;

int main() {
    int** array = nullptr;         // Puntatore all'array dinamico dei puntatori (sequenza completa)
    int** arrayVariabili = nullptr; // Puntatore all'array dinamico dei puntatori univoci

    int dimensione = 0;           // Numero di elementi attualmente nell'array sequenza
    int dimensioneVariabili = 0;  // Numero di elementi univoci

    while (true) {
        int x;
        cout << "Inserisci un numero: ";
        cin >> x;

        if (x < 0) break; // Esci dal ciclo se l'utente inserisce un numero negativo

        int* elemDaAggiungere = nullptr;
        bool duplicato = false;

        // Controlla se il numero è già presente
        for (int i = 0; i < dimensioneVariabili; i++) {
            if (*arrayVariabili[i] == x) {
                duplicato = true;
                elemDaAggiungere = arrayVariabili[i];
                break;
            }
        }

        if (!duplicato) {  // Alloca una nuova variabile dinamica
            elemDaAggiungere = new int(x);

            // Ridimensiona l'array delle variabili univoche
            int** nuovoArrayVariabili = new int*[dimensioneVariabili + 1];
            for (int i = 0; i < dimensioneVariabili; i++) {
                nuovoArrayVariabili[i] = arrayVariabili[i];
            }
            nuovoArrayVariabili[dimensioneVariabili] = elemDaAggiungere;

            delete[] arrayVariabili;
            arrayVariabili = nuovoArrayVariabili;
            dimensioneVariabili++;
        }

        // Ridimensiona l'array sequenza per aggiungere un nuovo elemento
        int** nuovoArray = new int*[dimensione + 1];
        for (int i = 0; i < dimensione; ++i) {
            nuovoArray[i] = array[i];
        }
        nuovoArray[dimensione] = elemDaAggiungere;

        delete[] array;
        array = nuovoArray;
        dimensione++;
    }

    // Quante variabili sono state allocate
    cout << "Allocate " << dimensioneVariabili << " variabili" << endl;

    // Stampa della sequenza completa
    for (int i = 0; i < dimensione; i++) {
        cout << *array[i] << " " ;
    }

    
    return 0;
}
