#include <iostream>
using namespace std ;

int main () {

    int eta ;
    cout << "inserire eta' : " ;
    cin >> eta ;

    if ( eta < 0 )
        cout << " ERRORE , eta' negativa " << endl ;
    else if ( eta < 12 )
        cout << " bambino " << endl ;
    else if ( eta < 17 )
        cout << " adolescente " << endl ;
    else if ( eta < 64 )
        cout << " adulto " << endl ;
    else 
        cout << " anziano " << endl ;

return 0 ;

}
