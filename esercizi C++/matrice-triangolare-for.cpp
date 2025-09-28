#include <iostream>
using namespace std ;

int main () {

    int numero ;

    do{
        cout << " inserire dimensione della matrice : " ;
        cin >> numero ;
    } while ( numero <= 0 ) ;
 
    for ( int righe=0 ; righe < numero ; righe++ ) {
        for ( int colonne= 0 ; colonne < numero ; colonne ++ ){
                /*     per fare quadrato con 0 all'interno:
                if (righe==0 || colonne==0 || righe==numero-1 || colonne=numero-1)
                    cout << "1" ;
                else 
                    cout << "0";   */
                if ( colonne <= righe )
                    cout << "1 " ;
                else 
                    cout << "0 " ;
        }

        cout<< endl;
    }

    //QUI SI PUO SCRIVERE AANCHE QUESTO: cout << righe << colonne << endl ;//

    return 0 ;

}