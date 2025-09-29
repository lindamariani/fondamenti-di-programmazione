#include <iostream>
using namespace std;

int main(){
    int _dim,x ;

    do{
        cout << "inserire dimensione dell'array: ";
        cin >> _dim ;
    } while (_dim < 1);

    int array[_dim];

    for (int i=0; i< _dim; i++){
        cout << "inserisci il " << i+1 << " elemento: ";
        cin >> array [i];
    }

    cout << "inserisci un numero x: ";
    cin >> x;

    int counter=0;

    for (int i=0; i<_dim; i++){
        if (array[i] % x == 0){
            counter ++;
            cout << array[i] << " e' multiplo di " << x << endl;
        }
    }

    if (counter==0){
        cout << "non ci sono multipli " << endl;
    } else 
        cout << "il numero di multipli e': " << counter << endl;


return 0; 

}
