 /* Scrivere una funzione che prenda come parametri un array di numeri interi, la sua lunghezza e un
 parametro di tipo intero k e ritorna il numero di sottosequenze nellarray la cui somma e pari a k. Per esempio, se larray
 passato come parametro e [1, 2,-3, 7,-1, 4, 3] e k = 3, la funzione dovra ritornare 3*/

 #include <iostream>
 using namespace std;

 int main(){

    int k;
    int dim;
    
    do {
    cout << "Inserire dimensione dell'array: ";
    cin >> dim;
    } while (dim < 1);

    int array[dim];

    for(int i = 0; i < dim; i++) {
        cout << "Inserire elemento numero " << i + 1 << " : ";
        cin >> array[i];
    }

    do {
    cout << "Inserire valore k: ";
    cin >> k;
    } while (k < 1);

    int somma;
    int counter = 0;

    for (int i = 0; i < dim; i++) {
        int somma = array[i];
    // Controlla sottosequenze di almeno 2 elementi
        for (int j = i + 1; j < dim; j++) {
            somma += array[j];
                if (somma == k) {
                    counter++;
                    break; // Interrompi il ciclo interno quando trovi una sottosequenza valida
                }
        }
    }

    for (int i = 0; i < dim; i++)
        cout << array[i] << " ";
    
    cout << endl;
    cout << "Numero: " << counter ;

    return 0;
 }