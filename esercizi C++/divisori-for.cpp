#include <iostream>
using namespace std ;

int main () {
    
    int i ;
    cout << " inserire numero intero positivo : " ;
    cin >> i ;

    int n ;
    int divisori = 0;

    for ( n=1 ; n <= i ; n++ ){
        if ( i%n == 0 ) {
            divisori++ ;
            cout << n << endl ;
        }
    }

    cout << " il numero " << i << " ha " << divisori << " divisori " << endl ;

    return 0 ;
}