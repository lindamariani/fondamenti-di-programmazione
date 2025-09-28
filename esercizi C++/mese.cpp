#include <iostream>
using namespace std ;

int main () {

    int num ;
    cout << " inserire un numero compreso tra 1 e 12 " ;
    cin >> num ;

    if ( num <= 0 )
        cout << " ERRORE " << endl ;
    if ( num == 1 )
        cout << " il mese e' gennaio " << endl ;
    if ( num == 2 )
        cout << " il mese e' febbraio " << endl ;
    if ( num == 3 )
        cout << " il mese e' marzo " << endl ;
    if ( num == 4 )
        cout << " il mese e' aprile " << endl ;
    if ( num == 5 )
        cout << " il mese e' maggio " << endl ;
    if ( num == 6 )
        cout << " il mese e' giugno " << endl ;
    if ( num == 7 )
        cout << " il mese e' luglio " << endl ;
    if ( num == 8 )
        cout << " il mese e' agosto " << endl ;
    if ( num == 9 )
        cout << " il mese e' settembre " << endl ;
    if ( num == 10 )
        cout << " il mese e' ottobre " << endl ;
    if ( num == 11 )
        cout << " il mese e' novembre " << endl ;
    if ( num == 12 )
        cout << " il mese e' dicembre " << endl ;

    return 0 ;


}