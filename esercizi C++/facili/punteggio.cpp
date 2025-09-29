#include <iostream>
using namespace std ;

int main() {

    int punteggio ;
    cout << " inserire punteggio : " ;
    cin >> punteggio ;
    
    if ( punteggio < 0 )
        cout << " ERRORE , punteggio negativa " << endl ;
    else if ( punteggio >= 90 && punteggio <= 100 )
        cout << " eccellente " << endl ;
    else if ( punteggio >= 80 && punteggio <= 89 )
        cout << " ottimo " << endl ;
     else if ( punteggio >= 70 && punteggio <= 79 )
        cout << " buono " << endl ;
    else if ( punteggio >= 60 && punteggio <= 69 )
        cout << " sufficiente " << endl ;
    else 
        cout << " insufficiente " << endl ;

    return 0 ;
   
}
