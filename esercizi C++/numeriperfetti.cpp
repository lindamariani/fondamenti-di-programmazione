#include <iostream>
using namespace std ;

int main () {
    int numero ;
    cout << "inserire un numero " ;
    cin >> numero ;
    int n;
    int somma=0 ;

    while ( numero < 0 ){
    cout << "valore errato " << endl ;
    cout << "inserire un numero " ;
    cin >> numero ;
    }

    cout << "i divisori sono: " ;
    
    for ( n=1 ; n < numero ; n++ ){
        if ( numero%n == 0 ) {
            somma=somma+n ;
            cout << n << "; ";
        }
    }

    cout << endl ;
    cout<< "la somma dei divisori e' :" << somma << endl;

    if ( somma == numero )
    cout << "il numero e' perfetto." << endl ;
    else 
    cout << "il numero non e' perfetto. " << endl ;

    return 0 ;
}