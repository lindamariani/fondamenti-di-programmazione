#include <iostream>
using namespace std;
#define MAX_SIZE 1000

int main() {
    
    int* a = new int[MAX_SIZE];
    int n = 0; // Dimensione dell'array a

    cout << "Inserire numero positivo (numero negativo per terminare):" ;
    while (true) {
        int x;
        cin >> x;
        if (x < 0) break;
        if (n < MAX_SIZE) {
            a[n++] = x;
        } else {
            cout << "Raggiunta la dimensione massima dell'array." << endl;
            break;
        }
    }

    // Stampa dell'array a
    cout << "Array a: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Creazione dell'array b
    int* b = new int[n]; // L'array b avrà al massimo dimensione n
    int m = 0; // Dimensione dell'array b

    for (int i = 0; i < n; i++) { // Controllo se ci sono duplicati
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) 
                count++;
        }
        if (count == 1) {
            b[m++] = a[i];
        }
    }

    // Stampa dell'array b
    cout << "Array b (elementi unici): ";
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    // Deallocazione della memoria
    delete[] a;
    delete[] b;

    return 0;
}
