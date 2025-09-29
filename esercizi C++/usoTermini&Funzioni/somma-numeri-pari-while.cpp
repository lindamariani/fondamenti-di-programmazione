#include <iostream>
using namespace std ;

int main () {

    int n ;
    int c = 0 ;
    int somma = 0 ;
    cout << "inserire numero positivo : " ;
    cin >> n ;

    while ( c <= n ) {
        if ( c % 2 == 0 ) { 
            somma += c ;
            cout << c << endl ;
        }
        c++ ;
    }

    cout << " la somma e' : " << somma << endl ;

    return 0 ;
}
