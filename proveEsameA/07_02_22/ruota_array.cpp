/* Scrivere una funzione ruota che, presi in input un array di interi a e la sua lunghezza, sposti in
 avanti di una posizione tutti i valori dellarray. Lultimo valore dovra essere spostato allinizio dellarray. La funzione main
 riportata di seguito*/

 #include <iostream>
 using namespace std;

 void print(int* array, int dim){
    
    for ( int i = 0; i < dim; i++){
        cout << array[i] << " ";
    }
    cout << endl;
 }

 void ruota(int* array, int dim){
    int nuovo_array[dim];

    for (int i = 0; i < dim; i++){
        if (dim - 1 == i){
            nuovo_array[0] = array[i];
        } else {
            nuovo_array[1 + i] = array [i];
        }
    }
        
    for (int i = 0; i < dim; i++){
        array[i] = nuovo_array[i];
    }
 }

 int main(){

    int dim;
    do {
        cout << "Inserire dimensione array: ";
        cin >> dim;
    } while (dim < 1);

    int array[dim];
    for (int i = 0; i < dim; i++){
        cout << "Inserire elemento numero " << i + 1 << " : ";
        cin >> array[i];
    }


    cout << "Lista inserita: ";
    print(array, dim);
    ruota(array, dim);
    
    cout << "Lista con ultimo elemento ruotato: ";
    print(array, dim);

    
    

    return 0;
 }
