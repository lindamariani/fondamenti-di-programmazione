#include <iostream>
using namespace std ;

int main(){

    float _prezzo ;

    cout << " digitare il prezzo : " ;
    cin >> _prezzo ;

    float _sconto = _prezzo - (_prezzo * 0.1) ;

    cout << " l'importo di " << _prezzo << " scontato del 10 per cento e' : " << _sconto << endl ;


    return 0 ;

}