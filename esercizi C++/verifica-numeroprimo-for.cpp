#include <iostream>
using namespace std ;

int main () {

    int numero ;
    cout << " inserire numero intero positivo : " ;
    cin >> numero ;

    int i ;
    int divisori = 0 ;
    bool primo = true ;

    for ( i=2 ; i < numero ; i++)
        if ( numero % i == 0 ) {
            primo = false ;
        }

    if ( primo ){
        cout << numero <<  " e' primo " << endl ;
    } else 
        cout << numero <<  " non e' primo " << endl ;

}