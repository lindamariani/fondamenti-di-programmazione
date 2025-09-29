#include <iostream>
using namespace std ;

int main () {

    int numero;
    cout << "inserire lunghezza lato quadrato: " ;
    cin >> numero ;

    while ( numero < 0 ){
    cout << "valore errato " << endl ;
    cout << "inserire un numero " ;
    cin >> numero ;
    }

    for( int righe=0 ; righe <= numero ; righe++ ) {
        for (int colonne=0 ; colonne<=numero*2 ; colonne++ ){
            if (righe==0 || righe==numero)
                cout<< "*";
            else if (colonne==0 || colonne==numero*2)
                cout<< "*";
            else
                cout<< " ";
        }

        cout<<endl;
    }

    return 0;
}
