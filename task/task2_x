#include <iostream>
using namespace std ;

int main () {

    int numero ;

    cout << "inserire un numero positivo intero dispari : " ;
    cin >> numero ;

    if ( numero <= 0 || numero%2==0 ) {

        do{
                cout << "input errato, inserire un numero positivo intero dispari : " ;
                cin >> numero ;
        } while ( numero <= 0 || numero%2==0 ) ;  

    } else {
    }
        
 
    for ( int righe=0 ; righe < numero ; righe++ ) {
        for ( int colonne= 0 ; colonne < numero ; colonne ++ ){
                if ( righe == colonne )
                    cout << "*" ;
                else if ( righe == numero-colonne- 1  )
                    cout << "*" ;
                else
                    cout << " " ;

        }
        cout<< endl;
    }

    return 0 ;

}  
