#include <iostream>
using namespace std ;

int main() {

    float a , b ;
    cout << " inserire il primo numero : " ;
    cin >> a ;
    cout << " inserire il secondo numero : " ;
    cin >> b ;

    if ( a == 0 ) 
        cout << " ERRORE " << endl ;
    else
        cout << " x = " << ((-1)*b)/a << endl ;

    return 0 ;

}
