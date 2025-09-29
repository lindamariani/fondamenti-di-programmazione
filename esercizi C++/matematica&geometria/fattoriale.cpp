#include <iostream>
using namespace std ;

int main () {

    int a ;
    cout << " inserire numero intero " ;
    cin >> a ;

    int counter = 1 ;
    int z = counter + 1 ;

    

    while ( counter <= a ){ 
        z = counter * z ; 
        counter++ ;
    }

    if ( a < 0 )
        cout << " ERRORE , inserire numero positivo " << endl ;
    else {
        cout << " il fattoriale di " << a << " e' : " << z/2 << endl ;
    }


    return 0;

} 
