/*Scrivere una funzione char* remove
 double(char* str) che prende come parametro una stringa C-style str e
 ritorna una nuova stringa in cui ogni carattere raddoppiato ` e ridotto a una singola occorrenza. Ad esempio, se str
 = "aabbccc", la funzione ritorna la stringa "abc".
 ▶ Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione remove
 remove
 double
 passando come parametro la stringa letta, ed infine stampa il risultato ritornato dalla chiamata alla funzione
 double. Nel caso in cui l’utente provi ad inserire una stringa di lunghezza maggiore di 100, la funzione
 main deve ritornare-1*/

 #include <iostream>
 #include <cstring>
 using namespace std;
 #define MAX_LEN 100

 char* remove_double(const char* str) {
    // Trova la lunghezza della stringa originale
    int len = strlen(str);

    // Alloca dinamicamente spazio per la nuova stringa
    char* result = new char[len + 1]; // +1 per il terminatore '\0'

    int j = 0; // Indice per la nuova stringa

    for (int i = 0; i < len; ++i) {
        // Verifica se il carattere è già presente in `result`
        bool already_included = false;
        for (int k = 0; k < j; ++k) {
            if (result[k] == str[i]) {
                already_included = true;
                break;
            }
        }

        // Se il carattere non è già stato aggiunto, aggiungilo
        if (!already_included) {
            result[j++] = str[i];
        }
    }

    // Termina la nuova stringa
    result[j] = '\0';
    return result;
}

 int main(){
    char str[MAX_LEN + 1]; // +1 per includere il carattere terminatore '\0'

    cout << "Inserire una stringa (max 100 caratteri): ";
    cin.getline(str, MAX_LEN + 1); // Legge una stringa con massimo 50 caratteri

    // Controlla la lunghezza della stringa inserita
    if (strlen(str) > MAX_LEN) {
        cout << "Errore: la stringa inserita supera i 100 caratteri." << endl;
        return -1;
    }

    cout << "Stringa inserita: " << str << endl;
    
    cout << "Stringa senza ripetizioni: " << remove_double(str) << endl;


    return 0;
 }