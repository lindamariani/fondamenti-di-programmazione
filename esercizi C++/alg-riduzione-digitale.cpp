#include <iostream>
using namespace std;

int main () {

    int numero ;
    cout << "inserire il numero: " ;
    cin >> numero ;

    int c ;

    while ( numero < 0 ){
    cout << "valore errato " << endl ;
    cout << "inserire un numero " ;
    cin >> numero ;
    }

    while ( numero >= 10 ){
        int somma= 0;
            while ( numero > 0 ){
                c = numero % 10 ; 
                cout << c << "+";
                somma= somma+c ;
                numero = numero / 10 ;
            }
        cout << "=" << somma << endl;
        numero = somma;
    }

    cout << "La cifra singola e': " << numero << endl;

    return 0;

}