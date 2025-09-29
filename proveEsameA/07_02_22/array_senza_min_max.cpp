/*Scrivere una funzione main che legge una sequenza di interi positivi da tastiera ( no ad incontrare
 un numero negativo) e li memorizza in un array dinamico di interi a (dimensione massima 1000 elementi)*/

 #include <iostream>
 using namespace std;

 #define MAX_SIZE 1000

 int main(){

    int* a = new int[MAX_SIZE];
    int n = 0; // Dimensione dell'array a

    while (true) {
        int x;
        cout << "Inserire numero (negativo per terminare): ";
        cin >> x;
        if (x < 0) break;
        if (n < MAX_SIZE) {
            a[n++] = x;
        } else {
            cout << "Raggiunta la dimensione massima dell'array." << endl;
            break;
        }
    }

    int elementoMin = a[0];
    int elementoMax = a[0]; 
    for (int i = 1; i < n; i++) {
        if (a[i] < elementoMin) {
            elementoMin = a[i];
        } else if (a[i] > elementoMax) 
            elementoMax = a[i];
    }

    int* b = new int[n];

    int counter = 0; // Conto quanti numeri ci sono da eliminare
    for (int i = 0; i < n; i++){
        if (a[i] == elementoMax || a[i] == elementoMin)
            counter ++;
    }

    int m = n - counter; // Lunghezza array b
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != elementoMin && a[i] != elementoMax) {
            b[index] = a[i];
            index++;
        }
    }

    cout << "Array inserito: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Elemento minimo: " << elementoMin << endl;
    cout << "Elemento massimo: " << elementoMax << endl;

    cout << "Array senza min e MAX: ";
    for (int i = 0; i < m; i++)
        cout << b[i] << " ";

    return 0;
 }