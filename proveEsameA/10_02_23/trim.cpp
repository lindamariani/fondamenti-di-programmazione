/* Scrivere una funzione trim che, presi come parametri una stringa C-style str e un carattere c, ritorna una nuova
 stringa ottenuta eliminando tutte le occorrenze del carattere c.
 Scrivere una funzione main che legge da tastiera una stringa di massimo 100 caratteri, chiama la funzione trim
 passando come parametro la stringa letta e il carattere a , ed infine stampa il risultato ritornato dalla chiamata
 alla funzione trim*/

 #include <iostream>
 #include <cstring>
 using namespace std;

 #define MAX_SIZE 100

 void print(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        cout << str[i];
    }
    cout << endl;
 }

void trim(char* str, char x) {
    int len = strlen(str);
    int j = 0; // Indice per la posizione nella stringa modificata

    for (int i = 0; i < len; i++) {
        if (str[i] != x) {
            str[j++] = str[i]; // Copia i caratteri diversi da 'x'
        }
    }
    str[j] = '\0'; // Termina la stringa con '\0'
}

 int main(){
    char str[MAX_SIZE + 1];

    cout << "Inserire stringa: ";
    cin.getline(str, MAX_SIZE + 1);

    int len = strlen(str);

    if (len > MAX_SIZE) {
        cout << "Errore: la stringa inserita supera i 100 caratteri." << endl;
        return -1;
    }

    char x;
    bool found = false;
    do {
        cout << "Inserire il carattere da eliminare: ";
        cin >> x;

        for (int i = 0; i < len; i++) {
            if (x == str[i]) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Errore: il carattere non è presente nella parola. Riprova." << endl;
        }
    } while (!found);

    cout << "Parola inserita: ";
    print(str);

    trim(str, x);

    cout << "Parola senza lettera '" << x << "' : ";
    print(str);

    

    return 0;
 }
