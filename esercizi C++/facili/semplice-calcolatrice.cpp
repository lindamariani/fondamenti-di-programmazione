#include <iostream>
using namespace std ;

int main () {

    int a , b , c , d;
    
    cout << " inserire il primo operando : " ;
    cin >> a ;
    cout << " inserire il secondo operando : " ;
    cin >> b ;
    cout << " inserire 1 per fare la somma, 2 per fare la differenza tra gli operandi scelti : " ;
    cin >> c ;

    if ( c < 1 || c > 2 )
    cout << " ERRORE , inserire 1 o 2 " ;
    else if ( c==1 ) {
    d = a + b ;
    cout << " il risultato della somma tra " << a << " e " << b << " e' : " << d << endl ;
    }
    else {
    d = a - b ;
    cout << " il risultato della differenza tra " << a << " e " << b << " e' : " << d << endl ;
    }

    return 0 ;

}
