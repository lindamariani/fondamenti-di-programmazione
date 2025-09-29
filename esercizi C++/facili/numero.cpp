#include <iostream>
using namespace std ;

int main () {
    int _numero ;

    cout << " inserire un numero intero " ;
    cin >> _numero ;

    if ( _numero > 0)
    cout << " numero positivo" << endl;
    else if ( _numero < 0)
    cout << "numero negativo" << endl ;
    else
    cout << "il numero e' uguale a 0 " << endl ;

return 0 ;

}
