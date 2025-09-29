#include <iostream>
using namespace std;

int main () {

    int numero ;
    cout << "inserire il numero da invertire: " ;
    cin >> numero ;

    int c ;
    
    cout << "il numero invertito e' : " ;

    while ( numero < 0 ){
    cout << "valore errato " << endl ;
    cout << "inserire un numero " ;
    cin >> numero ;
    }

    while ( numero > 0 ){
        c = numero % 10 ; 
        cout << c ; 
        numero = numero / 10 ;

    }


    return 0;

}
