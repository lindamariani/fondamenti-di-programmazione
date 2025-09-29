#include <iostream>
using namespace std ;

int main () {

    int a , b, c ;
    
    cout << " inserire tre numeri interi : " ;
    cin >> a >> b >> c ;

    int max = a  ;
    int min = a ;

    if ( b > max )
        max = b ;
    if ( c > max )
        max = c ;
    
    if ( b < min )
        min = b ;
    if ( c < min )
        min = c ;

    int risultato = max - min ;

    cout << " il risultato e' : " << risultato << endl ;

return 0 ;

}
