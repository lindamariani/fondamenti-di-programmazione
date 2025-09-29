#include <iostream>
using namespace std ;

int main (){

int numero ;
cout << " inserire altezza albero : " ;
cin >> numero ;

    
    while ( numero < 0 ){
    cout << "valore errato " << endl ;
    cout << "inserire un numero " ;
    cin >> numero ;
    }


    for ( int righe=1 ; righe <= numero ; righe++ ) {
        for ( int colonne= 1 ; colonne <= numero-righe ; colonne ++ ){
            cout << " " ;
            }

            for ( int z = 1 ; z <= 2 * righe -1; z++ ){
                cout << "*";
            }
        cout<< endl;
    }

    for ( int righe = 1 ; righe < numero; righe++ ){
                cout << " ";
            }
        cout << "*" << endl; 
    
    return 0;
}
