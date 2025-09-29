#include <iostream>
using namespace std ;

int main () {

    int a , b ;
    cout << " inserire il primo numero intero : " ;
    cin >> a ;
    cout << " inserire il secondo numero intero : " ;
    cin >> b ;

    int x = a ;
    int y = b ;

   
    while ( y > 0 ) {   
        int r = x % y ;
        x = y ;
        y = r ;
    }

    if ( a < 0 || b < 0 )
        cout << " ERRORE , entrambi i numeri devono essere positivi " << endl ;
    else 
        cout << " il M.C.D. fra " << a << " e " << b << " e' " << x << endl ;
    

    return 0 ;
}
