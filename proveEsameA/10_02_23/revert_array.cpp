/* Scrivere una funzione reverse con tipo di ritorno void che, presi come parametri un array di interi
 a e la sua dimensione length, inverta lordine degli elementi dellarray a. Per esempio se larray a e [1, 5, 3, 2, 8],
 dopo la chiamata a funzione reverse, larray sara [8, 2, 3, 5, 1]*/

 #include <iostream>
 using namespace std;

 void reverse (int* array, int dim){
    if (dim == 1)
        return;

    // Array per salvare l'array iniziale
    int nuovo_array[dim];
    for (int i = 0; i < dim; i++){
        nuovo_array[i] = array[i];
    }

    // Reverse
    for (int i = 0; i < dim; i++){
        array[i] = nuovo_array[dim - 1 - i];
    }

 }

 int main(){
    int dim;

    do {
        cout << "inserire dimensione array: ";
        cin >> dim;
    } while (dim < 1);

    int array[dim];

    for (int i = 0; i < dim; i++){
        cout << "inserire elemento numero " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Sequenza inserita: ";
    for (int i = 0; i < dim; i++)
        cout << array[i] << " ";
    cout << endl;

    reverse(array, dim);
    cout << "Sequenza invertita: ";
    for (int i = 0; i < dim; i++)
        cout << array[i] << " ";

    return 0;
 }