#include <iostream>
using namespace std ;

int main () {

    int n;

    do {
        cout << " inserire numero intero : " ;
        cin >> n ;
    } while ( n < 0 ) ;

    int righe = 0 ;
    int colonne = 0 ;

    
    while ( righe < n ) {
        
        colonne = 0 ;
        while ( colonne < righe + 1 ) {
            cout << " * " ;
            colonne++ ;
        }


        cout << endl ;
        righe++ ;
    }

    
}