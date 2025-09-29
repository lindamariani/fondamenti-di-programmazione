#include <iostream>
using namespace std ;

int main () {

    int numero ;
    cout << "inserire il numero da scomporre: " ;
    cin >> numero ;

    int n=2;
    int fattori=0 ;
    int k= numero ;

    while ( numero < 0 ){
    cout << "valore errato " << endl ;
    cout << "inserire un numero " ;
    cin >> numero ;
    }

    cout << "il numero scomposto in fattori primi e': " ;
     while ( n <= numero ){
        if ( numero%n == 0 ) {
            numero=numero/n;
            fattori=fattori+n;
            cout << n << "; " ;
        } else
        n++ ;

    }
    cout << endl;
    cout << "la somma dei fattori di " << k << " e' : " << fattori ;

    return 0 ;


}
