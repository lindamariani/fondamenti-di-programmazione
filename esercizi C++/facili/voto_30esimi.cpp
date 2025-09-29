#include <iostream>
using namespace std ;

int main() {

    int voto ;
    cout << " inserire voto : " ;
    cin >> voto ;
    
    if ( voto < 0 || voto > 27 )
        cout << " ERRORE , voto non possibile " << endl ;
    else if ( voto >= 0 && voto < 10 )
        cout << " la valutazione e' gravemente insufficiente " << endl ;
    else if ( voto < 17 )
        cout << " la valutazione e' insuffiente " << endl ;
     else if ( voto < 24 )
        cout << " la valutazione e' sufficiente " << endl ;
    else if ( voto < 27 )
        cout << " la valutazione e' buona " << endl ;
    else 
        cout << " la valutazione e' ottima " << endl ;

    return 0 ;
   
}
